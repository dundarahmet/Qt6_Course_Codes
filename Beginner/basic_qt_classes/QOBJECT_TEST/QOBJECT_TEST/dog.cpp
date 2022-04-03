#include "dog.h"

Dog::Dog(QObject *parent)
    : QObject{parent}
{

}

void Dog::chase()
{
    if ( !sender() ) {
        qInfo() << "Not Chasing: " << sender() ;
        return ;
    }
    qInfo() << "Chasing: " << sender() ;
}
