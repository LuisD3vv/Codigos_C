#include <stdio.h>
// Creacion de una matriz identidad.
void main()
{
    int N, i, j;

    printf("Ingresa el valor de N: ");
    scanf("%d", &N);

    int matriz[N][N];

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i == j) // la magia sucede aqui.
            {           // aunque simplemente compara si los indices son iguales.
                matriz[i][j] = 1;
            }
            else
                matriz[i][j] = 0;
        }
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }
}
