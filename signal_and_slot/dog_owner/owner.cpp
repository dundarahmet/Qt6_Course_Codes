#include "owner.h"

Owner::Owner(QObject *parent)
    : QObject{parent}
{

}

void Owner::give_snacks()
{
    qInfo() << "Snacks are ready" ;
    emit treats() ;
}
