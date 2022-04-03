#include <QCoreApplication>
#include <QDebug>
#include "pet.h"

typedef QMap<QString, Pet *> petmap;

petmap createPets (int max) {
    petmap map ;
    for (int i = 0; i < max; i++) {
        QString id = QString::number(i) ;
        Pet *pet = new Pet{} ;
        pet->setAge(i * 3) ;
        pet->setName("Pet: " + id) ;
        map.insert(id, pet) ;
    }

    return map ;
}

void mapPets (petmap &holder) {
    foreach (QString key, holder.keys()) {
        Pet *pet = holder.value(key) ;
        qInfo() << key << "\t" << pet->name() << " is Age: " << pet->age() ;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    petmap pets = createPets(5) ;
    qInfo() << "Count: " << pets.count() ;
    mapPets(pets) ;
    qDeleteAll(pets.values()) ;
    pets.clear() ;

    return a.exec();
}
