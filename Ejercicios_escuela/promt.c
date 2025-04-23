#include <stdio.h>

void main()
{
    int matriz[3][3];
    int numero;
    int suma = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("ingresa los elementos: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("ingresa el numero a contar: ");
    scanf("%d", &numero);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j] == numero)
            {
                suma++;
            }
        }
    }

    printf("el numero '%d' se encuentra %d veces en la matriz \n", numero, suma);
}