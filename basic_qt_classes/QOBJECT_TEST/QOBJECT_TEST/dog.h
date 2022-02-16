#ifndef DOG_H
#define DOG_H

#include <QObject>
#include <QDebug>

class Dog : public QObject
{
    Q_OBJECT
public:
    explicit Dog(QObject *parent = nullptr);

signals:
    void bark (void) ;

public slots:
    void chase (void) ;

};

#endif // DOG_H
