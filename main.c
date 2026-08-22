#include <stdio.h>
#include "game.h"


int main(void)
{
    int numero = escolher_numero_secreto();
    jogar(numero);
    return 0;
}