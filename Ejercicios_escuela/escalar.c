#include <stdio.h>

int main()
{
	int n = 2;
	int matriz[n][n];
	int escalar = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("ingresa los elementos: ");
			scanf("%d", &matriz[i][j]);
		}
	}

	printf("ingresa el escalar: ");
	scanf("%d", &escalar);

	int matriz_b[n][n];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			matriz_b[i][j] = escalar * matriz[i][j];
		}
	}
	printf("la matriz resultante multiplicada por el escalar es la siguiente\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("[%d] ", matriz_b[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}