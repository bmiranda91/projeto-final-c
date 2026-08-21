#include <stdio.h>
#include "game.h"

int main(void)
{
    int numero = escolher_numero_secreto();
    printf("Numero secreto (so para teste): %d\n", numero);
    return 0;
}