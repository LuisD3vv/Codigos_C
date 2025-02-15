/*
Hecho por Luis Alejandro Aguilar Soberanes | Licenciatura en ingeniería en Ciencias de Datos UAS 2025

Grupo 1-1 | codigo elaborado el 6/feb/2025

Todos los derechos reservados.


Codigo para conocer el funcionamiento de la biblioteca math.h y la funcion fabs() que nos regresa el valor absoluto de un numero.
asi mismo como compilar un programa en C y ejecutarlo en la terminal con la bibllioteca math.h con -lm

sintaxis de compilacion:

gcc nombre_archivo.c -o nombre_archivo_salida.c -lm
*/

#include <stdio.h>
#include <math.h>
// NO ES NECESARIO REGRESAR AL USUARIO ALGO, SE PUEDE HACER PROGRAMAS QUE NO MUESTREN NADA.
int main () {
    double x = -6.5;
    double c = fabs(x); //La funcion se puede usar directamente en la varible o al momento de imprimirla

    printf("El valor absoluto de %f = %f\n",x,c);

    return 0;
}
