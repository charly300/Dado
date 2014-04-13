#include <QApplication>
#include <iostream>
#include "core/dado.h"
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Dado d;

    for(int i = 0; i < 10; i++)
        cout << "Dado: " << d.shuffle() << endl;


    return a.exec();
}
