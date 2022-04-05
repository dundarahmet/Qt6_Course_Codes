#include <QCoreApplication>
#include <QVector>
// QVector is the alias of QList.
// Everything between them is the same.
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
