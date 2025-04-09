/*
Luis Alejandro Aguilar Soberanes 2-1 CIENCIA DE DATOS. 2025
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 30
int promedio, total, mayor; // posmayor = 0;

int vector[MAX];
void main()
{
    srand(time(NULL));

    for (int i = 0; i < MAX; i++)
    {
        vector[i] = rand() % 100 + 1;
        printf("%d\n", vector[i]);
    }

    // como c no tiene la funcion len por defecto podemos simurla asi.
    // int longitud = sizeof vector / sizeof vector[0]; // nos sirve para simular el largo ejem 30*4= 120 /  entre el largo de un solo bit (4) = 120 / 4 = 30, enves de 20.
    total = 0;

    // promedio y suma
    for (int x = 0; x < MAX; x++)
    {
        int actual = vector[x];
        total += actual;
    }
    promedio = total / MAX;

    // el mayor
    mayor = vector[0];
    // posmayor = sizeof (vector) / sizeof (vector[0]);

    for (int i = 1; i < MAX; i++)
    {
        if (vector[i] > mayor)
        {
            mayor = vector[i];
        }
    }
    printf("\n");
    printf("el numero mayor es %d\n", mayor);

    printf("El total de la suma es %d y el promedio %d\n", total, promedio);
}