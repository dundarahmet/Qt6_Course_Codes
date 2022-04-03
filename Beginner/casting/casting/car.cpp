#include "car.h"

Car::Car(QObject *parent)
    : QObject{parent}
{

}

void Car::drive (void) {
    qInfo() << "Drive" ;
}
void Car::stop (void) {
    qInfo() << "Stop" ;
}
