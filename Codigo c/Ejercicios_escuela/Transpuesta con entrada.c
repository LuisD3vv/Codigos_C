#include <stdio.h>
// #include <stdlib.h>

void main()
{
    int no_columnas, no_filas, i, j;

    printf("Ingresa el numero de filas y columnas(NxM): "); // por definicion tiene que ser 3 y 2 puede ser NXN.
    scanf("%d %d", &no_filas, &no_columnas);

    int matriz_original[no_filas][no_columnas];

    for (i = 0; i < no_filas; i++)
    {
        for (j = 0; j < no_columnas; j++)
        {
            printf("Ingresa los elementos de la matriz: ");
            scanf("%d", &matriz_original[i][j]);
        }
    }

    printf("Matriz Original\n");
    for (i = 0; i < no_filas; i++)
    {
        for (j = 0; j < no_columnas; j++)
        {
            printf("[%d] ", matriz_original[i][j]);
        }
        printf("\n");
    }

    int transpuesta[2][3];

    printf("Matriz transpuesta\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        { // Hay que tener cuidado con la asignacion.
            transpuesta[i][j] = matriz_original[j][i];
            printf("[%d]", transpuesta[i][j]);
        }
        printf("\n");
    }
}