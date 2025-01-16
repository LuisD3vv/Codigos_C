#include <stdio.h>

int main()
{
	// productos
	int coca_cola = 19, galletas = 15, jugo = 20, total = 0, importe_final = 0, cnt_cocas = 0, cnt_jugo = 0, cnt_galleta = 0;
	float descuento = 0.15, descuento_total = 0.85;

	// imprimir el menu

	printf("Bienvenido, este es nuestro menu:\n Coca cola $19\n Juguito de uva $20\n Galletas $15\n");

	// informarle al usuario que debe de hacer

	printf("a continuacion, debera introducir la cantidad de cada producto.\n");

	// recibir datos del usuario
	printf("Cantidad de cocas: ");
	scanf("%d", &cnt_cocas);
	printf("Cantidad de jugos: ");
	scanf("%d", &cnt_jugo);
	printf("cantidad de galletas: ");
	scanf("%d", &cnt_galleta);

	// Realizar la operacion
	total = (cnt_cocas * coca_cola) + (cnt_jugo * jugo) + (cnt_galleta * galletas);

	// realizar descision

	if (total >= 300)
	{
		importe_final = total * descuento_total;
		printf("%d la cantidad con descuento es de", importe_final);
	}
	else if (total < 300)
	{
		printf("%d, no se le ha aplicado descuento, su total es de", total);
	}
	else
	{
		printf("La concha de tu madre bob esponja");
	}
	// Terminar para ma;ana y repasar

	return 0;
}
