#include <stdio.h>

int main()
{
    int j, k, i;
    int no_filas_a, no_columnas_a;
    int no_filas_b, no_columnas_b;

    printf("ingresa la dimension de la matriz A: ");
    scanf("%d %d", &no_filas_a, &no_columnas_a);

    printf("ingresa la dimension de la matriz B: ");
    scanf("%d %d", &no_filas_b, &no_columnas_b);

    while (no_columnas_a == no_columnas_b)
    {

        int matriz_a[no_filas_a][no_columnas_a], matriz_b[no_filas_b][no_columnas_b];

        printf("ingresa los elementos de A\n");

        for (i = 0; i < no_filas_a; i++)
        {
            for (j = 0; j < no_columnas_a; j++)
            {
                printf("A: [%d][%d]", i, j);
                scanf("%d", &matriz_a[i][j]);
            }
        }

        printf("ingresa los elementos de B\n");
        for (i = 0; i < no_filas_b; i++)
        {
            for (j = 0; j < no_columnas_b; j++)
            {
                printf("B: [%d][%d]", i, j);
                scanf("%d", &matriz_b[i][j]);
            }
        }

        int matriz_c[no_filas_a][no_columnas_b];

        // creacion de la variable C
        for (i = 0; i < no_filas_a; i++)
        {
            for (j = 0; j < no_columnas_b; j++)
            {
                matriz_c[i][j] = 0;
                for (k = 0; k < no_columnas_a; k++)
                {
                    matriz_c[i][j] += matriz_a[i][k] * matriz_b[k][j];
                }
            }
        }

        printf("La matriz resultante C\n");
        for (i = 0; i < no_filas_a; i++)
        {
            for (j = 0; j < no_columnas_b; j++)
            {
                printf("[%d] ", matriz_c[i][j]);
            }
            printf("\n");
        }
    }
    printf("Para lograr multiplicar las matrices, es necesario que las columnas de A, sean iguales a las filas de B\n");

    return 0;
}