#include <QCoreApplication>
#include <QDebug>
#include "test.h"

void test (QString value) {
    qInfo() << &value << "Size: " << value.length() ;
}

void testPtr (QString *value) {
    qInfo() << value << "Size: " << value->length() ;
}

void wow (void) {
    // Automatic memory management
    std::unique_ptr<Test> t(new Test()) ;
    t->doStuff() ;

    Test *ptr = new Test() ;
    delete ptr ;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Bryan" ;
    qInfo() << &name << "Size: " << name.length() ;
    test(name) ;
    testPtr(&name) ;

    qInfo() << "=========================================" ;
    QString *new_name = new QString("Hello pointer") ;
    qInfo() << new_name ;
    delete new_name ;
    qInfo() << "=========================================\n" ;
    wow() ;

    return a.exec();
}
