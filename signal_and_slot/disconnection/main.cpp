#include <QCoreApplication>
#include <QTextStream>
#include <QDebug>
#include <iostream>
#include <string>
#include "station.h"
#include "radio.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Radio boombox ;
    Station *channels[3] ;

    channels[0] = new Station{&boombox, 94, "Rock and Roll"} ;
    channels[1] = new Station{&boombox, 87, "Hip Hop"} ;
    channels[2] = new Station{&boombox, 104, "News"} ;

    boombox.connect(&boombox, &Radio::quit, &a, &QCoreApplication::quit, Qt::QueuedConnection) ;

//    for (int i = 0; i < 3; i++) {
//        boombox.connect(channels[i], &Station::send, &boombox, &Radio::listen) ;
////        channels[i]->connect(channels[i], &Station::send, &boombox, &Radio::listen) ;
//    }

    do {
        qInfo() << "Enter on, off, test or quit" ;
        QTextStream qtin{stdin} ;
        QString line = qtin.readLine().trimmed().toUpper() ;

        if (line == "QUIT") {
            qInfo() << "Quiting" ;
            emit boombox.quit() ;
            break ;
        }

        if (line == "TEST") {
            qInfo() << "Testing." ;
            for (int i = 0; i < 3; i++) {
                channels[i]->broadcast(QString::number(i) + "Broadcasting live!");
            }
            qInfo() << "Radio is on" ;
        }

        if (line == "ON") {
            qInfo() << "Turning the radio on." ;
            for (int i = 0; i < 3; i++) {
                boombox.connect(channels[i], &Station::send, &boombox, &Radio::listen) ;
            }
            qInfo() << "Radio is on" ;
        }

        if (line == "OFF") {
            qInfo() << "Turning the radio off." ;
            for (int i = 0; i < 3; i++) {
                channels[i]->disconnect(channels[i], &Station::send, &boombox, &Radio::listen) ;
            }
            qInfo() << "Radio is off" ;
        }

    } while (true) ;

    return a.exec();
}
