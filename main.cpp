#include <QApplication>
#include <iostream>
#include "core/dado.h"
#include <time.h>
#include <stdlib.h>
#include "ui/mainwindow.h"
#include <QException>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow *m = new MainWindow;
    m->show();

    return a.exec();
}
