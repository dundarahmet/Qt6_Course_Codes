#include <QCoreApplication>
#include "test.h"

void lifecycle (void) {
    Test t ;
}

void notification (void) {
    Test mom ;
    Test child ;

    mom.setObjectName("Mom") ;
    child.setObjectName("Child") ;

    qDebug () << &mom ;
    qDebug () << &child ;

    QObject::connect(&mom, &Test::alarm, &child, &Test::wake) ;

    mom.testing() ;
    emit mom.alarm("hello") ;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    lifecycle() ;
    notification() ;
    return a.exec();
}
