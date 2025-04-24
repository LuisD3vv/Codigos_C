#include <stdio.h>
#include <stdlib.h>

void main()
{

    int i, j, matriz_c[2][3];

    int matriz_1[2][3] = {
        {3, 5, 5},
        {2, 7, 6}};

    int matriz_2[2][3] = {
        {1, 2, 4},
        {4, 6, 4}};

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matriz_c[i][j] = matriz_1[i][j] - matriz_2[i][j];
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("[%d]", matriz_c[i][j]);
        }
        printf("\n");
    }
}