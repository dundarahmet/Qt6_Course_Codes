#ifndef OWNER_H
#define OWNER_H

#include <QObject>
#include <QDebug>

class Owner : public QObject
{
    Q_OBJECT
public:
    explicit Owner(QObject *parent = nullptr);

    void give_snacks (void) ;

signals:
    void treats (void) ;

};

#endif // OWNER_H
