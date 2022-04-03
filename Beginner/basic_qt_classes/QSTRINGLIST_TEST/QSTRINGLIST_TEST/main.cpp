#include <QCoreApplication>
#include <QDebug>
#include <QException>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString data = "Hello world how are you" ;
    QStringList lst = data.split(' ') ;

    qInfo() << lst ;

    foreach (QString str, lst) {
        qInfo() << str ;
    }

    lst.sort(Qt::CaseSensitive) ;
    qInfo() << lst ;

    QString myvar = "Hello" ;

    if (lst.contains(myvar)) {
        int index = lst.indexOf(myvar) ;
        qInfo() << lst.at(index) ;
    }

    return a.exec();
}
