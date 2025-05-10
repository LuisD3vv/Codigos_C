//Practica con funciones y vectores numericos y de caracteres

#include <stdio.h>
#include <string.h>
/*
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
*/

//Recibir argumentos desde la consola de comandos
//El nombre del programa tambien se cuenta como pametro.


// Argument counter -numero de argumentos que se han especificado en la CLI
// Argument values -es un vector de cadena que contiene los parametros especificados en la CLI


//Los valores se guardan en vectores, por lo cual podemops acceder a ellos por su indice
int main(int argc, char *argv[]) {
    printf("Hola: parametro numero %d tu nombre es, '%s' saludos.\n",argc, argv[0]);
    printf("El agumento 0: %s\n",argv[0]);
    printf("El agumento 1: %s\n",argv[1]);
    printf("El agumento 2: %s\n",argv[2]);

    printf("\n");

    for(int i = 0; i < argc; i++) {

        printf("El agumento %d: %s\n",i, argv[i]);
    }
    printf("El numero de argumentos totales es: %d", argc);

    return 0;
}

//Funcion que vamos a utilizar.

/*
Tomando en cuenta los siguientes parametros en la linea de comandos

./a.out parametro1 parametro2 parametro3 serian 4 en total
*/