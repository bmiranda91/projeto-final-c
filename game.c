#include <stdlib.h>
#include <time.h>
#include "game.h"

int escolher_numero_secreto(void)
{
    srand(time(NULL));
    int numero = rand() % 100 + 1;
    return numero;
}