#include "laptop.h"

laptop::laptop(QObject *parent, QString name)
    : QObject{parent}
{
    this->name = name ;
    qInfo() << this << "Constructor" ;
}

laptop::~laptop (void) {
    qInfo() << this  << "Destructor" << this->name ;
}

double laptop::asKilo (void) {
    return this->weight * 0.453592;
}

void laptop::test (void) {
    qInfo() << this << "Test: " << name << " Kilo" << this->asKilo() ;
}
