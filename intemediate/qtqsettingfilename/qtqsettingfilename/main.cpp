#include <QCoreApplication>
#include <QSettings>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString filename = QCoreApplication::applicationDirPath() + "/settings.ini" ;
    qInfo() << filename ;

    QSettings settings(filename, QSettings::Format::IniFormat) ;

    settings.beginGroup("people") ;
    settings.setValue("Bryan", 44) ;
    settings.endGroup() ;

    settings.sync() ;

    settings.beginGroup("people") ;
    qInfo() << "Tammy:" << settings.value("Tammy", QVariant("Person not found!")) ;
    qInfo() << "Bryan:" << settings.value("Bryan", QVariant("Person not found!")) ;
    settings.endGroup() ;

    return a.exec();
}
