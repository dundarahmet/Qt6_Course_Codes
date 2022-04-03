#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "Constructor" ;
}

Test::~Test()
{
    qInfo() << this << "Deconstructor" ;
}

void Test::testing()
{
    QString noise = "Wake up" ;

    emit alarm(noise) ;

}

void Test::wake(QString noise)
{
    qInfo() << "From: " << sender() << noise ;
}
