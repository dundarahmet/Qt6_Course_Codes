#include <QCoreApplication>
#include <QDebug>

// QVector definition
// but this information is true after the 6.2 version of Qt
// template<typename T> using QVector = QList<T>;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString data = "Hello world how are you" ;
    QVector<QString> list = data.split(" ") ;

    foreach(QString word, list) {
        qInfo() << word ;
    }

    return a.exec();
}
