#include <QCoreApplication>
#include <QSharedPointer>
#include <vector>
#include "toy.h"
#include "cat.h"

void test (void) {
    int max = 5 ;
    QSharedPointer<Toy> toy{ new Toy() } ;
    std::vector<QSharedPointer<Cat> > cats(max) ;

    for (int i = 0; i < max; i++) {
        cats[i].reset( new Cat() ) ;
        cats[i]->play(toy) ;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    test() ;

    return a.exec();
}
