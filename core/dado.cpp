#include "dado.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


using namespace std;

Dado::Dado()
{
    srand(time(NULL));
}

unsigned int Dado::shuffle()
{
    num = rand() % 6 + 1;

    return num;
}
