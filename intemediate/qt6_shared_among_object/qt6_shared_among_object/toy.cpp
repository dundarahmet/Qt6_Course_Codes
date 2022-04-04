#include "toy.h"

Toy::Toy(QObject *parent, QString name)
    : QObject{parent}
{
    this->setObjectName(name) ;
    qInfo() << "Constructor" << this ;
}

Toy::~Toy()
{
    qInfo() << "Deconstructor" << this ;
}
