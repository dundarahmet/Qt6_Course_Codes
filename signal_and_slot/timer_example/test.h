#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QTimer>
#include <QDebug>

class My_Timer : public QTimer {
public:
    explicit My_Timer(QObject *parent = nullptr) : QTimer{parent} {
        qInfo() << this->parent() << " / this is my parent" ;
    };
    ~My_Timer () {
        qInfo() << "QTimer is destruction is called" ;
    }
};

class test : public QObject
{
    Q_OBJECT
    int count ;
public:
    explicit test(QObject *parent = nullptr);

signals:
    void quit (void) ;

public slots:
    void timeOut (void) ;

private:
//    QTimer m_timer ;
    My_Timer m_timer ;

};

#endif // TEST_H
