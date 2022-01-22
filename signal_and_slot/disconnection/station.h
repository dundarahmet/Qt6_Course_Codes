#ifndef STATION_H
#define STATION_H

#include <QObject>
#include <QDebug>

class Station : public QObject
{
    Q_OBJECT
public:
    QString name ;
    int channel ;
    explicit Station(QObject *parent = nullptr, int channel = 0, QString name = "unknown");

signals:
    void send (int channel, QString name, QString message) ;

public slots:
    void broadcast (QString message) ;

};

#endif // STATION_H
