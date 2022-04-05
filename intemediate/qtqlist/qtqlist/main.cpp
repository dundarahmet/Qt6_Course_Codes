#include <QCoreApplication>
#include <QList>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> list ;

    list << 1 << 2 << 3 ;
    for (int i = 0; i < 5; i++) {
        list.append(i) ;
    }

    qInfo() << list ;

    qInfo() << "Length" << list.length() ;
    qInfo() << "Size" << list.size() ;
    qInfo() << "Count" << list.count() ;
    qInfo() << "Count" << list.count(1) ;

    list.replace(2, 99) ;

    qInfo() << list ;

    list << 3 << 3 << 3 ;
    qInfo() << list ;

    list.remove(3) ;
    qInfo() << list ;

    foreach(int i, list) {
        qInfo() << i ;
    }

    list.removeAll(3) ;
    qInfo() << list ;

    QList<int> slice = list.sliced(2, 3) ;
    qInfo() << slice ;

    return a.exec();
}
