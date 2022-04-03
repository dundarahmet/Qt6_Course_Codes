#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std ;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    string name{""} ;
    int age{0} ;

    qInfo() << "Enter your age: " ;
    cin >> age ;
    qInfo() << "Enter your name: " ;
    cin >> name ;

    qInfo() << "Your name and age is: " ;
    cout << name << " " << age << endl ;
    qDebug() << "debug purposees" ;
    qCritical() << "Critical message" ;
    qWarning() << "Warning message" ;
    qFatal("Fatal message. After this message, program is terminated." );



    return a.exec();
}
