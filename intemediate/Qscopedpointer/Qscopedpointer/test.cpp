#include "test.h"

Test::Test(QObject *parent, QString name)
    : QObject{parent}
{
    this->setObjectName(name) ;
    qInfo() << "Constructed" << this ;
}

Test::~Test()
{
    qInfo() << "Deconstructed" << this ;
}
