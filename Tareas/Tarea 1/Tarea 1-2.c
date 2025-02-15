/*
Fecha de elaboración: 07/02/2025

Hecho por Luis Alejandro Aguilar Soberanes | Licenciatura en ingenieria en Ciencias de Datos UAS 2025

Facultad de Informatica Culiacan. | FIC
*/

//Dadas las dimensiones de un cilindro hueco o tubo cilindrico, determinar la superficie y el volumen

#include <stdio.h>
#include <math.h>

#define PI 3.1416 // sustituir cada aparicion de pi por el valor dado.
// Define es un macro que al momento de la compilacion sustituye el token-string por cad aparicion de indentificador.

int main () {


    float radio_int, radio_ext, altura, superficie, volumen;

    // solicitud de datos al usuario

    printf("ingresar el radio externo: " );
    scanf("%f",&radio_ext);

    printf("ingresar el radio interno: " );
    scanf("%f",&radio_int);

    printf("ingresar la altura: " );
    scanf("%f",&altura);

    // determinar areas y superficie (necesarias para el calculo de la superficie total.)

    float area_l_externa,area_l_interna, area_bases;

    area_l_externa = 2 * PI * radio_ext * altura;
    area_l_interna = 2 * PI * radio_int  * altura;
    area_bases = 2 * PI * (pow(radio_ext,2) - pow(radio_int,2)); // pow(funcion de math para potencias.)

    //Calculo del area total.
    superficie = 2 * PI * (radio_ext + radio_int) * altura + 2 * PI *(pow(radio_ext,2) - pow(radio_int,2)); 

    //Calulo del volumen 

    volumen = PI * altura * (pow(radio_ext,2) - pow(radio_int,2));

    printf("La superficie del cilindro es %.2f y su volumen es %.2f\n", superficie, volumen);

    return 0;
}


//# Formulas utilizadas en este ejercicio#

//# Nota, las variables radio_ext, radio_int y altura son los datos solicitados al usuario.

//-para el area lateral externa = 2 * pi * radio_ext * altura

//-para el area lateral interna = 2 * pi * radio_int * altura

//-para las bases = 2 * pi * (radio_ext^2 * radio_int^2)

//-para el area total (superficie) = 2 * pi * (radio_ext + radio_int) * altura + 2 * pi * (radio_ext^2 - radio_int^2)

//-para el volumen; Volumen = pi * altura * (radio_ext^2 - radio_int^2)

