#ifndef RACECAR_H
#define RACECAR_H

#include "car.h"

class Racecar : public Car
{
    Q_OBJECT
public:
    explicit Racecar(QObject *parent = nullptr);
    bool supercharger = true ;
    void gofast (void) ;

signals:

};

#endif // RACECAR_H
