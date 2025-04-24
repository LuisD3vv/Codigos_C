/*
Luis Alejandro Aguilar Soberanes 1-1 CIENCIA DE DATOS. 2025
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 30
int mayor, menor;

int vector[MAX];
void main()
{
    srand(time(NULL));

    for (int i = 0; i < MAX; i++)
    {
        vector[i] = rand() % 100 + 1;
        printf("[%d] ", vector[i]);
    }

    mayor = vector[0];

    for (int i = 1; i < MAX; i++)
    {
        if (vector[i] > mayor)
        {
            mayor = vector[i];
        }
    }

    menor = vector[0];

    for (int i = 1; i < MAX; i++)
    {
        if (vector[i] < menor)
        {
            menor = vector[i];
        }
    }

    printf("\n");
    printf("el numero mayor es %d\n", mayor);
    printf("el numero menor es %d\n", menor);
}