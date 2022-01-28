#include "feline.h"

Feline::Feline(QObject *parent)
    : QObject{parent}
{

}

void Feline::meow (void) {
    qInfo() << "Meow" ;
}
void Feline::hiss (void) {
    qInfo() << "hiss" ;
}
