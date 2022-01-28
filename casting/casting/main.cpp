#include <QCoreApplication>
#include <QDebug>
#include "car.h"
#include "racecar.h"
#include "feline.h"

void testDrive (Car * obj) {
    obj->drive() ;
    obj->stop() ;
}

void race (Racecar *obj) {
    obj->drive() ;
    obj->stop() ;
    obj->gofast() ;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//dynamic casting
//    Racecar *player1 = new Racecar(&a) ;

////    testDrive(player1) ; // implicit conversion
//    Car *obj = dynamic_cast<Car *>(player1) ;

//    if (obj) {
//        testDrive(obj) ;
//    }

//    Feline *cat = new Feline(&a) ;

//    Car *catCar = dynamic_cast<Car *>(cat) ;

//    if (catCar) {
//        testDrive(catCar) ;
//    }

    // static casting
//    Car *car = new Car(&a) ;
//    qInfo() << car ;
////    race((Racecar *)(car)) ;
//    Racecar *racer = static_cast<Racecar *>(car) ;
//    qInfo() << racer ;
//    if (racer) race(racer) ;

    // reinterpret_cast
    Racecar *player1 = new Racecar(&a) ;
    qInfo() << player1 ;
    // cast the racecar to its base
    Car *carobj = reinterpret_cast<Car *>(player1) ;
    qInfo() << carobj ;

    Feline *catcar = reinterpret_cast<Feline *>(player1) ;
    qInfo() << catcar ;

    int *pointer = reinterpret_cast<int *>(player1) ;
    qInfo() << pointer ;

    return a.exec();
}
