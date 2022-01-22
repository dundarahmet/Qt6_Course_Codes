#include "test.h"

test::test(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "I'm alive";
    connect(&m_timer, &QTimer::timeout, this, &test::timeOut) ;
    m_timer.setInterval(1000) ;
    m_timer.start() ;
    count = 0 ;
}

void test::timeOut()
{
    qInfo() << "TEST!!" ;
    count++ ;
    if (count == 10) {
        m_timer.stop() ;
        emit quit() ;
    }
}
