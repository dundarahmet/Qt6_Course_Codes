#ifndef LAPTOP_H
#define LAPTOP_H

#include <QObject>
#include <QDebug>

class laptop : public QObject
{
    Q_OBJECT
public:
    explicit laptop(QObject *parent = nullptr, QString name = "");

    ~laptop(void) ;

    int weight ;
    QString name ;
    double asKilo (void) ;
    void test (void) ;

signals:

};

#endif // LAPTOP_H
