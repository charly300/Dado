#ifndef CONTROLLERDADO_H
#define CONTROLLERDADO_H

#include "../core/dado.h"
#include "../ui/formdado.h"


class ControllerDado
{
public:
    ControllerDado(Dado *, FormDado *);

    void shuffle();

private:
    Dado *dado;
    FormDado *ui;
};

#endif // CONTROLLERDADO_H
