#ifndef FORMDADO_H
#define FORMDADO_H

#include <QWidget>

namespace Ui {
class FormDado;
}

class FormDado : public QWidget
{
    Q_OBJECT

public:
    explicit FormDado(QWidget *parent = 0);
    ~FormDado();

    void setValue(unsigned int);

private:
    void validarNumero(unsigned int);
    void loadImage(unsigned int);
private:
    Ui::FormDado *ui;
    int num;
};

#endif // FORMDADO_H
