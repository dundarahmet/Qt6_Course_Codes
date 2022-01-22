#include "station.h"

Station::Station(QObject *parent, int channel, QString name)
    : QObject{parent}
{
    this->channel = channel ;
    this->name = name ;
}

void Station::broadcast(QString message)
{
    emit this->send(this->channel, this->name, message) ;
}
