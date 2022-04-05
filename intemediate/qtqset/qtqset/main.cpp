#include <QCoreApplication>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSet<QString> people ;
    people << "Bryan" << "Tammy" << "Chris" << "Heather" ;
    qInfo() << people ;

    people.insert("Rango") ;
    qInfo() << people ;

    foreach(QString person, people) {
        qInfo() << person ;
    }

    qInfo() << "Bryan in collection? " << people.contains("Bryan") ;



    return a.exec();
}
