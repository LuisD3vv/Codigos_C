#include <stdio.h>

void main()
{
    int no_filas, no_columas;

    printf("Ingresa las dimensiones de la matriz: ");
    scanf("%d %d", &no_filas, &no_columas);

    int matriz[no_filas][no_columas];

    if (no_filas == no_columas)
    {
        printf("La matriz es cuadrada\n");
    }
    else
    {
        printf("La matriz no es cuadrada\n");
    }

    for (int i; i < no_filas; i++)
    {
        for (int j = 0; j < no_columas; j++)
        {
            printf("Porfavor ingresa los elementos de la matriz: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Los elementos de la diagonal\n");
    for (int i; i < no_filas; i++)
    {
        for (int j = 0; j < no_columas; j++)
        {
            if (matriz[i] == matriz[j])
            {
                printf("[%d] [%d] \n", i, j);
            }
        }
    }
}