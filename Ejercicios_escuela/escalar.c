#include <stdio.h>

int main()
{
	int escalar;

	int matriz[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}};

	printf("ingresa un numero para multiplicar la matriz: ");
	scanf("%d", &escalar);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matriz[i][j] = matriz[i][j] * escalar;
		}
	};
	// Imprimir cada elemento ya multiplicado por el escalar, por eso se recorre de nuevo la matriz
	printf("La matriz multiplicada es: \n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("[%d]", matriz[i][j]);
		}
		printf("\n");
	};

	return 0;
}