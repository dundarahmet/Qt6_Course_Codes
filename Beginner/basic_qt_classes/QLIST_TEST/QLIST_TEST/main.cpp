#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString data = "Hello world how are you" ;
    QList<QString> list = data.split(" ") ;
    qInfo() << list ;

    foreach(QString str, list) {
        qInfo() << str ;
    }

    QList<int> age{44, 56, 21, 13} ;
    qInfo() << "\nAge" ;

    for (auto &holder : age) {
        qInfo() << holder ;
    }
    qInfo() << "\nAge" ;
    age.append(99) ;
    for (auto &holder : age) {
        qInfo() << holder ;
    }
    qInfo() << "\nAge" ;
    age.remove(1) ;
    for (auto &holder : age) {
        qInfo() << holder ;
    }

    return a.exec();
}
