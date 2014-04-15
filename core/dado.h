#ifndef DADO_H
#define DADO_H

#include "controller/observerdado.h"
#include <QList>

class Dado
{
public:
    Dado();

    unsigned int shuffle();
private:
    unsigned int num;

    void notifyShuffle();

    QList<ObserverDado *> observers;
};

#endif // DADO_H
