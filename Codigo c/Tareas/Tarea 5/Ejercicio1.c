#include <stdio.h>
/*
Hecho por Luis Alejandro Aguilar soberanes FIC UAS / Ciencia de datos 2025 14/05/2025

*/
int menor(int n[], int tam);
int mayor(int n[], int tam);

int main()
{
	int vector[] = {23,42,43,45,65,78,90,98,75,35};

	printf("El numero mayor es %d\n", mayor(vector,10));
	printf("El numero menor es %d\n", menor(vector,10));


	return 0;
}

int menor(int n[],int tam) {
	int menor = n[0];
	for(int i = 0; i < tam; i++) {
		if(n[i] < menor) {
			menor = n[i];
		}

	}
	return menor;
}
	int mayor(int n[],int tam) {
		int mayor = n[0];
		for(int i = 0; i< tam; i++) {
			if(n[i] > mayor) {
				mayor = n[i];
			}
		}
		return mayor;
	}s