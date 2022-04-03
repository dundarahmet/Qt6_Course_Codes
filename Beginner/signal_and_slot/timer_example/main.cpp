#include <QCoreApplication>
#include "test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test my_test ;
    a.connect(&my_test, &test::quit, &a, &QCoreApplication::quit, Qt::QueuedConnection) ;

    return a.exec();
}
