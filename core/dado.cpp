#include "dado.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


using namespace std;

Dado::Dado()
{
    srand(time(NULL));
}

int Dado::shuffle()
{


    num = rand() % 6 + 1;

    return num;
}

void Dado::srand_()
{

}
