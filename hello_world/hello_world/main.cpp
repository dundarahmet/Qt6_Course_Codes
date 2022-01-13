#include <QCoreApplication>
#include <iostream>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout << "Hello World is activated.\n" ;
    qInfo() << "Hello World" ;
    return a.exec();
}
