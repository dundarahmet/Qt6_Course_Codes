#include "source.h"

Source::Source(QObject *parent)
    : QObject{parent}
{

}

void Source::test (void) {
    emit mySignal("Hello World") ;
}
