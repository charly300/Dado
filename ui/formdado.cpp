#include "formdado.h"
#include "ui_formdado.h"
#include <QException>

FormDado::FormDado(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormDado)
{
    ui->setupUi(this);
}

FormDado::~FormDado()
{
    delete ui;
}

void FormDado::setNum(unsigned int num)
{
    this->validarNumero(num);
    this->loadImage(num);
}

void FormDado::validarNumero(unsigned int num)
{
    if((num > 6)  || (num <= 0))
        throw new QException;
}

void FormDado::loadImage(unsigned int num)
{
    ui->label_dado->setPixmap(QPixmap(QString(":/new/prefix1/img/" + QString::number(num) + ".png")));
}
