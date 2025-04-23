#include <stdio.h>

int main()
{
	int a, b;
	int oper_suma, oper_resta, oper_multipli, oper_division;
	char nombre[10];

	printf("Cual es tu nombre: ");
	fgets(nombre, sizeof(nombre), stdin);
	printf("Porfavor, ingresa el numero mas grande primero: \n");
	printf("Ingresa el primer numero:\n");
	scanf("%d", &a);
	printf("Ingresa el segundo numero: \n");
	scanf("%d", &b);

	oper_suma = a + b;
	oper_resta = b - a;
	oper_multipli = b * a;
	oper_division = a / b;

	printf("Hola %s aqui tienes tus resultados: \n", nombre);
	printf("La suma de tus numeros %d mas %d es %d\n", a, b, oper_suma);
	printf("La resta de tus numeros %d menos %d es %d\n", a, b, oper_resta);
	printf("La multiplicacion de tus numeros %d por %d es %d\n", a, b, oper_multipli);
	printf("La division de tus numeros %d y %d entre %d\n", a, b, oper_division);
}