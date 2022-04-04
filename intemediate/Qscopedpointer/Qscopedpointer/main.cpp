#include <QCoreApplication>
#include <QScopedPointer>
#include "test.h"


void test (void) {
    QScopedPointer<Test> sp{ new Test() } ;
    sp->setObjectName("Parent") ;

    qInfo() << "Scope pointer" << &sp ;
    qInfo() << "Scope pointer data" << sp.data() ;
    qInfo() << sp->objectName() ;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test() ;

    return a.exec();
}
