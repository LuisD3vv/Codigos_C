#include <stdio.h>
int main()
{
    float num1 = 0;

    printf("ingrese un valor con coma flotante:\n");

    scanf("%f", &num1);     // el comando scan nos ayuda a leer el contenidod de una varabiable el upperson es la direccion de memoria, es  decir donde se guarda la variable en memoria
    printf("%.2f\n", num1); // el dos depus del . nos dice literalmente cuantos ceros despues
    // printf("%p", num1); conoce la ubicacion de memoria de la variable
    return 0;
}

// paginacion y segmentacion
