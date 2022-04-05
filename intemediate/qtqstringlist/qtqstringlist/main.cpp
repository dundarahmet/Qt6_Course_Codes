#include <QCoreApplication>
#include <QStringList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QStringList names {"Bryan"} ;
    names << "Tammy" << "Rango" ;
    names.append("Heather") ;
    qInfo() << names ;

    names.replaceInStrings("a", "@") ;
    qInfo() << names ;

    names.replaceInStrings("@", "a") ;
    names.sort() ;
    qInfo() << names ;

    QString people = names.join(",") ;
    qInfo() << people ;

    QStringList myList = names.filter("r") ;
    qInfo() << myList ;

    QString me = "Bryan" ;
    qInfo() << "Contains: " << names.contains(me) ;
    qInfo() << "Index: " << names.indexOf(me) ;
    qInfo() << "Value: " << names.at(names.indexOf(me)) ;






    return a.exec();
}
