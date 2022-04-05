#include "test.h"

Test::Test(QObject *parent, QString name)
    : QObject{parent}
{
    this->setObjectName(name) ;
    qInfo() << "Constructor" << this ;
}

Test::~Test()
{
    qInfo() << "Deconstructor" << this ;
}
