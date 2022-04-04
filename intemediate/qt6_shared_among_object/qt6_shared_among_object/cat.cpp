#include "cat.h"

Cat::Cat(QObject *parent, QString name)
    : QObject{parent}
{
    this->setObjectName(name) ;
    qInfo() << "Constructor" << this ;
}

Cat::~Cat()
{
    qInfo() << "Deconstructor" << this ;
}

void Cat::play(QSharedPointer<Toy> toy)
{
    m_toy.swap(toy) ;
    qInfo() << this << "Playing with" << m_toy.data() ;
}
