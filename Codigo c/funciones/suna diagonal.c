#include <stdio.h>

//Crear una matriz 3x3 y sumar la diagol principal.

int sumaDiagonal(int vector[][3],int n );//si es una matriz solo se pasa el numero de columnas(el segundo tamaño)

int main() {
	int matriz[3][3];
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			printf("ingresa el %d %d numero: ",i,j);
			scanf("%d", &matriz[i][j]);
		}
    }
	printf("La suma de la diagonal es: %d\n",sumaDiagonal(matriz, 3));
	printf("Se veria algo asi\n");
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			if(i != j) { // si el numero es diferente.(osea si son iguales se quedan iguales)
                matriz[i][j] = 0;

            } //el indice se quedara igual
            printf("[%d] ", matriz[i][j]);
        }	
	
		printf("\n");
	}
	return 0;
}

int sumaDiagonal(int vector[][3],int n ) {
	int diagonal = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(i == j) {
				diagonal += vector[i][i]; //sumar cuando iguales
			}
		}
	}
	return diagonal;
}