#include <QCoreApplication>
#include <QList>
#include "test.h"

void testListAuto (void) {
    QList<QSharedPointer<Test>> list ;

    for (int i = 0; i < 5; i++) {
        QSharedPointer<Test> item{new Test{nullptr, "item" + QString::number(i)}} ;
        list.append(item) ;
    }

    foreach(QSharedPointer<Test> test, list) {
        qInfo() << test.data() ;
    }

    qInfo() << "Remove one item" ;
    list.removeAt(0) ;
    qInfo() << "Clearing" ;
    list.clear() ;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    testListAuto() ;

    return a.exec();
}
