#include <QCoreApplication>
#include "animal.h"
#include "laptop.h"
#include "feline.h"
#include "canine.h"

void test(laptop &machine) {
    machine.test() ;
}

void makeLaptops (void) {
    laptop mine(nullptr, "my laptop") ;
    laptop yours(nullptr, "your laptop") ;
    mine.weight = 3 ;
    yours.weight = 5 ;

    test(mine) ;
    test(yours) ;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Animal cat ;
    Animal dog ;
    Animal fish ;

    cat.setObjectName("Kitty") ;
    dog.setObjectName("Fido") ;
    fish.setObjectName("Nemo") ;

    cat.speak("meow") ;
    dog.speak("bark") ;
    fish.speak("blob") ;

    qInfo() << "=================================================" ;
    makeLaptops() ;
    qInfo() << "=================================================" ;
    Animal animal ;
    qInfo() << "=================================================" ;

    Feline cat1 ;
    Canine dog1 ;
    return a.exec();
}
