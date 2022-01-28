#include "racecar.h"

Racecar::Racecar(QObject *parent)
    : Car{parent}
{

}

void Racecar::gofast (void) {
    qInfo() << "gofast" << this->supercharger;
}
