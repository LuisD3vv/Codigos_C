#include <stdio.h>
int main() {
int opcion = 0;

printf("Ingrese el numero del dia que desea conocer: ");
scanf("%d", &opcion);

switch(opcion) {
	case 1:
		printf("Hoy es lunes\n");
	break;

	case 2:
		printf("Hoy es martes\n");
	break;

	case 3:
		printf("Hoy es miercoles\n");
	break;

	case 4:
		printf("Hoy es jueves\n");
	break;

	case 5:
		printf("Hoy es viernes\n");
	break;

	case 6:
		printf("Hoy es sabado\n");
	break;

	case 7:
		printf("Hoy es domingogogogogogoggg");

	default:
		printf("La semana tiene solo siete dias pendejazo\n");
	break;

}
return 0;
}
