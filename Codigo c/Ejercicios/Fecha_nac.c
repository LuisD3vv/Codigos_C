#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Este programa lo que hace es aparte de restringir la entrada de datos. te dice la edad

void main () {
    int actual = 2025;

    int edad;

    char nombre[10];

    for(int i = 0; i < sizeof(nombre) / sizeof(nombre[0]); i++) {
        printf(" %d", i);
        printf("ingresa tu nombre caracter por caracter: ");
        scanf(" %c", &nombre[i]);
        if(isdigit(nombre[i])) {
            printf("ingresa una letra\n");
            i--;
        }
    }

    printf("ingrese su año de nacimiento: ");
    scanf("%d", &edad);

    int edad_pronta = actual - edad;

    printf("Hola %s, este año cumpliras %d",nombre, edad_pronta);
}