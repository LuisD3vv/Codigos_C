#include <stdio.h>

void contar_pares_impares(int *arr, int n, int *pares, int *impares);
//pasamos su dirrecion de memoria como parametro

int main () {
	int vector[10];
	int pares = 0, impares = 0;

	printf("Llena el vector de numero\n");
	for(int i = 0 ; i < 10; i++) {
		printf("Numero [%d] = ",i+1);
		scanf("%d", &vector[i]);
	}
	contar_pares_impares(vector,10,&pares,&impares);
	printf("Cantidad de pares [%d]: de impares[%d]",pares, impares);

	return 0;
}
void contar_pares_impares(int *arr, int n, int *pares, int *impares) {
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			(*pares)++;     //  accedes y modificas el valor apuntado en los parametros
		} else {
			(*impares)++;
		}
	}
}
