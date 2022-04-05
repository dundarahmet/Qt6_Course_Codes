#include <QCoreApplication>
#include <QMap>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QMap<QString, int> ages ;

    ages.insert("Bryan", 44) ;
    ages.insert("Tammy", 37) ;
    ages.insert("Rango", 15) ;

    qInfo() << ages ;
    qInfo() << "Keys: " << ages.keys() ;
    qInfo() << "Values: " << ages.values() ;
    qInfo() << "Bryan is: " << ages["Bryan"] ;

    ages.remove("Rango") ;
    qInfo() << "Contains: " << ages.contains("Rango") ;

    foreach(QString key, ages.keys()) {
        qInfo() << key << ": " << ages[key] ;
    }

    qInfo() << "Test" << ages.value("Test", -1) ;
    qInfo() << ages ;

    ages["Bryan"] = 99 ;
    qInfo() << "Bryan" << ages.value("Bryan", -1) ;


    return a.exec();
}
