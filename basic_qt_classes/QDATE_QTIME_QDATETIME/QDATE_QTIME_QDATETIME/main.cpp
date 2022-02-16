#include <QCoreApplication>
#include <QDebug>
#include <QDate>
#include <QTime>
#include <QDateTime>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "\nQDate" ;
    QDate today = QDate::currentDate() ;
    qInfo() << today ;
    qInfo() << today.addDays(1) ;
    qInfo() << today ;
    qInfo() << today.addDays(-1) ;
    qInfo() << today.addYears(20) ;

    qInfo() << "ISODate" << today.toString(Qt::DateFormat::ISODate) ;
    qInfo() << "ISODateWithMs" << today.toString(Qt::DateFormat::ISODateWithMs) ;
    qInfo() << "RFC2822Date" << today.toString(Qt::DateFormat::RFC2822Date) ;
    qInfo() << "TextDate" << today.toString(Qt::DateFormat::TextDate) ;

    qInfo() << "\nQTime" ;
    QTime now = QTime::currentTime() ;

    qInfo() << "ISODate" << now.toString(Qt::DateFormat::ISODate) ;
    qInfo() << "ISODateWithMs" << now.toString(Qt::DateFormat::ISODateWithMs) ;
    qInfo() << "RFC2822Date" << now.toString(Qt::DateFormat::RFC2822Date) ;
    qInfo() << "TextDate" << now.toString(Qt::DateFormat::TextDate) ;

    qInfo() << "\nQDateTime";
    QDateTime current = QDateTime::currentDateTime() ;

    qInfo() << current ;

    QDateTime  expire = current.addDays(45) ;
    qInfo() << "Expire on: " << expire ;

    if (current > expire) {
        qInfo() << "Expired!" ;
    } else {
        qInfo() << "Not expired!" ;
    }

    return a.exec();
}
