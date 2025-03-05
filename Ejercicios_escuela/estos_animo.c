#include <stdio.h>

void main()
{
	int matriz_1[3][2], matriz_2[3][2], matriz_c[3][2];

	int i, j;

	printf("ingreso de datos matriz 1\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Ingresa el valor de la matriz 1: ");
			scanf("%d", &matriz_1[i][j]);
		}
	}

	printf("ingreso de datos matriz 2\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Ingresa el valor de la matriz 2: ");
			scanf("%d", &matriz_2[i][j]);
		}
	}

	// Matriz final.
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			matriz_c[i][j] = matriz_1[i][j] * matriz_2[i][j];
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("[%d] ", matriz_c[i][j]);
		}
		printf("\n");
	}
}