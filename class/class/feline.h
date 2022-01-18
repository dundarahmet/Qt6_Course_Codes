#ifndef FELINE_H
#define FELINE_H

#include <QObject>
#include "mammal.h"
#include <QDebug>

class Feline : public Mammal
{
    Q_OBJECT
public:
    explicit Feline(QObject *parent = nullptr);
    void meow (void) { qInfo() << "meow" ;}

signals:

};


#endif // FELINE_H
