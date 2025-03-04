#include <stdio.h>

void main()
{
    int matriz[3][2], i, j, matriz_tras[2][3];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("ingresa los valores de la matriz: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    // Basicamente la matriz transpuesta es convertiendo [m][n] x [n][m]
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matriz_tras[j][i] = matriz[i][j];
            printf("[%d] ", matriz_tras[j][i]);
        }
        printf("\n");
    }
}
