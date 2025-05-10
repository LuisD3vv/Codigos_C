#include <stdio.h>

int FuncionDoblar(int vector[],int N);

int main() {

	int vector1[] = {1,2,3,4,5,6,7,8,9,10};

	printf("Valores Originales:\n");
	for(int i = 0; i < 10; i ++) {
		printf("%d ", vector1[i]);
	}

	printf("\n");+

    //LLamamos a la fincion que nos dara los valores modificados
	FuncionDoblar(vector1, 10);

	printf("Valores al Doble:\n");
	for(int i = 0; i < 10; i ++) {
		printf("%d ", vector1[i]);
	}

	return 0;
}

int FuncionDoblar(int vector[],int N) {
	for(int i = 0; i < N; i++) {
		vector[i] *= 2; // Cada valor es igual a multiplicarlo por 2.
	}
}
