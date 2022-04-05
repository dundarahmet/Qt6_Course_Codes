#include <QCoreApplication>
#include <QMap>
#include "test.h"

void testMapDelete (void) {
    QMap<QString, Test *> map ;

    for (int i = 0; i < 5; i++) {
        QString id = "ID-" + QString::number(i) ;
        QString name = "Item-" + QString::number(i) ;

        map.insert(id, new Test{nullptr, name}) ;
    }

    foreach (QString item, map.keys()) {
        qInfo() << item << ": " << map[item] ;
    }

    qDeleteAll(map) ;
    map.clear() ;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    testMapDelete() ;

    return a.exec();
}
