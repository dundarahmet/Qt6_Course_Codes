#include <QCoreApplication>

#include "source.h"
#include "destination.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Source osource ;
    destination odestination ;

    QObject::connect(&osource, &Source::mySignal, &odestination, &destination::mySlot) ;
    osource.test() ;
    return a.exec();
}
