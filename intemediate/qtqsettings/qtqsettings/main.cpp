#include <QCoreApplication>
#include <QDebug>
#include <QSettings>
#include <QStringList>
#include <QRandomGenerator>

void info (QSettings &settings) {
    qInfo() << "File:" << settings.fileName() ;
    qInfo() << "Keys:" << settings.allKeys() ;
}

void save (QSettings &settings) {
    settings.setValue("test", 123) ;
    qInfo() << settings.status() ;
    qInfo() << "Saved" ;
}

void load (QSettings &settings) {
    qInfo() << settings.value("test").toString() ;
    bool ok ;
    qInfo() << settings.value("test").toInt(&ok) ;

    if (!ok) {
        qInfo() << "Could not convert to int" ;
    }
}

void saveAge (QSettings *settings, QString group, QString name, int age) {
    settings->beginGroup(group) ;
    settings->setValue(name, age) ;
    settings->endGroup() ;
}
int getAge (QSettings *settings, QString group, QString name) {
    settings->beginGroup(group) ;

    if (!settings->contains(name)) {
        qWarning() << "Does not contain " << name << " in " << group;
        settings->endGroup() ;
        return 0 ;
    }

    bool ok ;
    int value = settings->value(name).toInt(&ok) ;
    settings->endGroup() ;

    if (!ok) {
        qWarning() << "Could not convert to int" ;
        return 0 ;
    }
    return value ;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QCoreApplication::setOrganizationName("Void") ;
    QCoreApplication::setOrganizationDomain("void.com") ;
    QCoreApplication::setApplicationName("Tester.ahmet") ;
    QSettings settings(QCoreApplication::organizationName(),
                       QCoreApplication::applicationName()) ;
    if (settings.allKeys().length() == 0) {
        qInfo() << "No settings ...saving..." ;
        save(settings) ;
    } else {
        qInfo() << "Loading the settings..." ;
        load(settings) ;
    }

    qInfo() << "\n\n\n\n\n" ;

    saveAge(&settings, "people", "Bryan", 44) ;
    saveAge(&settings, "beer", "twoheart", 1) ;
    saveAge(&settings, "beer", "Bryan", 11) ;

    qInfo() << "TwoHeart" << getAge(&settings, "beer", "twoheart") ;
    qInfo() << "Bryan (person)" << getAge(&settings, "people", "Bryan") ;
    qInfo() << "Bryan (beer)" << getAge(&settings, "beer", "Bryan") ;

    qInfo() << "\n\n\n\n\n" ;


    QStringList people ;
    people << "Bryan" << "Tammy"<< "Heather" << "Chris" ;

    foreach (QString person, people) {
        int value = QRandomGenerator::global()->bounded(100) ;
        saveAge(&settings, "test", person, value) ;
    }

    settings.sync() ; // force to save
    qInfo() << "File:" << settings.fileName() ;

    foreach (QString group, settings.childGroups()) {
        settings.beginGroup(group) ;
        qInfo() << "Group:" << group;
        foreach (QString key, settings.childKeys()) {
            qInfo() << "\tKey:" << key << " = " << settings.value(key).toString();
        }
        settings.endGroup() ;
    }


    return a.exec();
}
