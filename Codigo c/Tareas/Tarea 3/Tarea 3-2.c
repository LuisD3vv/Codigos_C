/*
Luis Alejandro Aguilar Soberanes Ingenieria en ciencia de datos LICD grupo 1-1

Facultad de informatica Culiacan | FIC UAS | 2025

*/

#include <stdio.h>

#define MAX 10

int main()
{
    int i, j, k;
    int no_filas_A, no_columnas_A;
    int no_filas_B, no_columnas_B;

    printf("Ingresa el número de filas y columnas de la matriz A: ");
    scanf("%d %d", &no_filas_A, &no_columnas_A);

    printf("Ingresa el número de filas y columnas de la matriz B: ");
    scanf("%d %d", &no_filas_B, &no_columnas_B);

    if (no_columnas_A != no_filas_B)
    {
        printf("El número de columnas de A debe ser igual al número de filas de B.\n");
        return 1;
    }

    int matrizA[MAX][MAX], matrizB[MAX][MAX], MatrizC[MAX][MAX];

    printf("Ingresa los valores de la matriz A:\n");
    for (i = 0; i < no_filas_A; i++)
    {
        for (j = 0; j < no_columnas_A; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("Ingresa los valores de la matriz B:\n");
    for (i = 0; i < no_filas_B; i++)
    {
        for (j = 0; j < no_columnas_B; j++)
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    for (i = 0; i < no_filas_A; i++)
    {
        for (j = 0; j < no_columnas_B; j++)
        {
            MatrizC[i][j] = 0;
            for (k = 0; k < no_columnas_A; k++)
            {
                MatrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    printf("Matriz resultante C:\n");
    for (i = 0; i < no_filas_A; i++)
    {
        for (j = 0; j < no_columnas_B; j++)
        {
            printf("[%d] ", MatrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}
