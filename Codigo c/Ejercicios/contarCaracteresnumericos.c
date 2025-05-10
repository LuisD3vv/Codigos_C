#include <stdio.h>
#include <stdlib.h>

int sumatoria(int numero);

int main() {

	int N;

	printf("Ingresa el putisimo numero: ");
	scanf("%d",&N);
 
	printf("La cantidad de elemetos en tus numero es:%d\n",sumatoria(N));
	return 0;
}

int sumatoria(int numero) {
	int sumita = 0;
	char convertir[10];
	snprintf(convertir, sizeof(convertir), "%d\n", numero); // Convierte el numero a cadena
	int i = 0;
	while(convertir[i] != '\0') {
		if(convertir[i] == ' ') {
		   continue;
		}
		printf("%c", convertir[i]);
		sumita += 1;
		i++;
	}
    return sumita-1; // restarle un indice que es el caracter nulo por defecto
}

