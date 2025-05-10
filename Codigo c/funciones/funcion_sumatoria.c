#include <stdio.h>


// Las funciones prototipo nos sirven para poder utilizar funciones debajo de la funciono main principal
int funcionSumatoria(int vectores[], int N);

int main() {

	int vector1[]= {10,20,30,40,50,60,70,80,90,100};
	int vector2[]= {1,2,3,4,5,6,7,8,9,10};
    int vector3[] = {2,4,6,8,10,12,14,16,18,20};
    int vector4[] = {3,6,9,12,15,18,21,24,27,30};
    int vector5[] = {5,10,15,20,25,30,35,40,45,50};

    // Aqui llamamos  a la funcion y le pasamos sus argumentos
	printf("La sumatoria del primer vector es: %d\n", funcionSumatoria(vector1, 10));
	printf("La sumatoria del segundo vector es: %d\n",funcionSumatoria(vector2, 10));
	printf("La sumatoria del tercer vector es: %d\n", funcionSumatoria(vector3, 10));
	printf("La sumatoria del cuarto vector es: %d\n", funcionSumatoria(vector4, 10));
	printf("La sumatoria del quinto vector es: %d\n", funcionSumatoria(vector5, 10));

	return 0;
}

int funcionSumatoria(int vectores[], int N) {
	int sumatoria = 0;
	for(int i = 0; i < N; i++) {
		sumatoria += vectores[i];
	}
	return sumatoria;
}

