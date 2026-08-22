#include <stdlib.h>
#include <time.h>
#include "game.h"
#include <stdio.h>

int escolher_numero_secreto(void)
{
    srand(time(NULL));
    int numero = rand() % 100 + 1;
    return numero;
}


void jogar(int numero_secreto)
{
    int tentativa;
    int acertou = 0;

    while (acertou == 0)
    {
        printf("Tenta adivinhar o numero (1-100): ");
        scanf("%d", &tentativa);

        if (tentativa == numero_secreto)
        {
            printf("Acertaste! O numero era mesmo %d\n", numero_secreto);
            acertou = 1;
        }
        else if (tentativa < numero_secreto)
        {
            printf("O numero secreto e maior que isso.\n");
        }
        else
        {
            printf("O numero secreto e menor que isso.\n");
        }
    }
}