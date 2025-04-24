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

    printf("Matriz original\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Matriz Transpuesta\n");
    // Basicamente la matriz transpuesta es convertiendo [m][n] x [n][m]
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matriz_tras[i][j] = matriz[j][i];
            printf("[%d] ", matriz_tras[i][j]);
        }
        printf("\n");
    }
}
