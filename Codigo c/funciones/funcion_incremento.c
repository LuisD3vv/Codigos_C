#include <stdio.h>

/*
5/06/2025
hecho por Luis Alejandro Aguilar Soberanes / Facultad Informatica Culiacan

Licenciatura en Ciencia de Datos
*/

//Declaramos las funciones prototipo para poder utilizarlas debajo del main.
int funcionSumatoria(int vectores[], int N);
int funcionIncremento(int vectores[], int N, int incremento);

int main() {
    //Declaramos los vectores que usaremos
	int vector1[]= {1,2,3,4,5,6,7,8,9,10};
	int vector2[]= {2,4,6,8,10,12,14,16,18,20};
	int vector3[] = {3,6,9,12,15,16,18,21,24,27,30};

	// Aqui llamamos  a la funcion y le pasamos sus argumentos
	printf("Valores originales de los vectores:\n");
	printf("La sumatoria del primer vector es: %d\n", funcionSumatoria(vector1, 10));
	printf("La sumatoria del segundo vector es:%d\n",funcionSumatoria(vector2, 10));
	printf("La sumatoria del tercer vector es: %d\n", funcionSumatoria(vector3, 10));

    printf("\n");
	//LLamamos a la funcion y a su ves incrementamos el valor individual de cada elemento.
	funcionIncremento(vector1, 10, 10);
	funcionIncremento(vector2, 10, 10);
	funcionIncremento(vector3, 10, 10);
	printf("El resultado con los valores incrementados es:\n");
	printf("La sumatoria del primer vector es: [%d]\n",funcionSumatoria(vector1, 10));
	printf("La sumatoria del segundo vector es:[%d]\n",funcionSumatoria(vector2, 10));
	printf("La sumatoria del tercer vector es: [%d]\n", funcionSumatoria(vector3, 10));

	return 0
}
// No necesita return, porque los valores los pasamos por referencia.
int funcionIncremento(int vectores[], int N, int incremento) {
	for(int k = 0; k < N; k ++) {
		vectores[k] += incremento;
	}
}
// este si necesita return porque estamos regresano el total de una suma
int funcionSumatoria(int vectores[], int N) {
	int sumatoria = 0;
	for(int i = 0; i < N; i++) {
		sumatoria += vectores[i];
	}
	return sumatoria; // el return debe de ir fuera del for (porque al finalizar es cuando ya recorrio todos, de otra forma se interrumpiria el loop)
}

