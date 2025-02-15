/*
Fecha de elaboración: 07/02/2025

Hecho por Luis Alejandro Aguilar Soberanes | Licenciatura en ingenieria en Ciencias de Datos UAS 2025

Facultad de Informatica Culiacan. | FIC
*/


//Calcular el area de la base, el area lateral, el area total y el volumen de un hexaedro segun los datos ingresados 

// Para este ejemplo se uso como base un hexaedro regular, un cubo.

#include <stdio.h> // Libreria para entrada y salida (standard input and output(printf, scanf))#include <math.h>
#include "math.h" // Libreria Matematica, para compilar utilizando sus funciones necesitamos utilizar -lm


int main () {

    //Declaración de variables
    float arista, areaBase, areaLateral, areaTotal, volumen;

    //Solicitud de datos
    printf("Ingrese la longitud de la arista(lado) del cubo: ");
    scanf("%f", &arista);

    //Calculo de area de la base
    areaBase = pow(arista, 2); // el are de un cubo, es decir el valor ingresado^2
    
    areaLateral = 4 *pow(areaBase,2); //El área lateral es el área de las 4 caras laterales del cubo (sin contar base y parte superior). Cada cara tiene área arista^2

    //calculo area total y volumen
    areaTotal = 6 * areaBase ;
    volumen = pow(arista, 3);

    //impresion de resultado

    printf("Dada la dimension %.2f de un lado del hexaedro,\n",arista); //longitud del arista un lado del cuadrado
    printf("valor del area base es: %.2f\n", areaBase); // area de una cara del cuadrado de un cubo
    printf("valor del area lateral es %.2f\n", areaLateral); // es la suma del los 4 lados del cuadrado
    printf("valor del area total es %.2f\n", areaTotal); // el area base por las 6 caras del cubo
    printf("volumen del hexaedro es %.2f\n", volumen); // el voumen, que dada la formula V=s^3 

    return 0; // retornar el valor si el codigo esta correcto.

}

/*
Formulas utilizadas en cada caso.
Abase = s^2
Alateral = 4(s^2)
Atotal = 6(base^2)
Volumen =  se calcula como el cubo de la arista
*/
