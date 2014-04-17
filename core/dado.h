#ifndef DADO_H
#define DADO_H

#include <QList>

class Dado
{
public:
    Dado();

    unsigned int shuffle();
private:
    unsigned int num;
};

#endif // DADO_H
