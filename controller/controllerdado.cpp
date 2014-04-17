#include "controllerdado.h"

ControllerDado::ControllerDado(Dado *dado, FormDado *widget)
{
    this->dado = dado;
    this->ui = widget;
}

void ControllerDado::shuffle()
{
    ui->setValue(dado->shuffle());
}


