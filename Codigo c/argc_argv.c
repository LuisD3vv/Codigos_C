#include <stdio.h>
// argc numero de argumentos y argv es el vector de argumentos.
int main (int argc, char *argv[]) { // leer contenido desde la terminal, es una buena alternativa para scanf
    printf("El numero de palabras: %d\n", argc - 1); // para no salir del rango
    return 0;
}

//INVESTIGAR BIBLIOTECA STLIB Y TIME
//