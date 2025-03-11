#include <stdio.h>

#define max 3

void main()
{
    int matriz[max][max];

    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < max; j++)
        {
            printf("ingresa los valores de la matriz: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < max; j++)
        {
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }
}