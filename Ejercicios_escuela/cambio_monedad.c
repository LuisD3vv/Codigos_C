// Cambio de monedas..
#include <stdio.h>

int monedas[10]={1000,500,200,100,50,20,10,5,2,1}; // Cambio moneda mexicana 
void main () {
    int num, cantidad, numonedas;

    printf("Introduzca el importe exacto: ");
    scanf("%d", &cantidad);

    printf("El numero optimo es el siguiente:\n");
    for (num=0; num<10; num++) {

        numonedas=cantidad/monedas[num];
        if (numonedas != 0)
            printf("%d billete de $%d.\n",numonedas, monedas[num]);
        cantidad=cantidad % monedas[num];
    }
}

/*
Este codigo lo que hace es tomar un valor ingresa por el usuario, posteriormente
se recorre los vectores del valor, despues el numero de monedas es igual al valor ingresado, dividido entre
el vector que toque en el for, es decir 100 / 1000, si se puede, y este no tiene residuo, el resultado sera entero
y no necesitaria otro recorrido.

en cambio de un numero con resto, es decir 33, iteraria dividiendo 33 entre cada elemento del vetor, en el cual
hasta que se pueda dividir entre uno, se saltara a la siguiente iteracion mediante la reasignacion del elemento moneda,
que guarda el resto de la division que se realio posteriorimente y lo continua diviendo entre el siguiente numero el vector
asi sumando cuantas veces se puede dividir el numero entre el indice del vector
 */