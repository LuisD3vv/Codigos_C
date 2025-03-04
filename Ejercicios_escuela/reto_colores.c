#include <stdio.h>
#include <stdlib.h>

void main()
{

    int i, j, matriz_c[2][2];

    int matriz_1[2][3] = {
        {3, 5, 5},
        {2, 7, 6}};

    int matriz_2[3][2] = {
        {1, 2},
        {4, 6},
        {1, 2}};

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            matriz_c[i][j] = 0; // Inicializar en 0
            for (int k = 0; k < 3; k++)
            { // Itera sobre columnas de matriz_1 o filas de matriz_2
                matriz_c[i][j] += matriz_1[i][k] * matriz_2[k][j];
            }
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("[%d]", matriz_c[i][j]);
        }
        printf("\n");
    }
}