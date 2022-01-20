#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "Constructor" ;
    this->holder = 0 ;
}

Test::~Test () {
    qInfo() << this << "Destructor" ;
}

void Test::doStuff (void) {
    qInfo() << this << Q_FUNC_INFO ;
}
