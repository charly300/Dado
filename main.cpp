#include <QApplication>
#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    cout << "Dados" << endl;

    return a.exec();
}
