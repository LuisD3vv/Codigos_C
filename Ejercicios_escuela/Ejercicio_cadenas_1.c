#include <stdio.h>
#include <string.h> // Trabajar con cadenas y strings

/*
Algunas funciones importantes de String.h


strcmp comparaar strings
strcat añadir string al final de otro
strlen longitud de la cadena
strcpy copiar un string a otro

Las cadenas son simplemente vectores de caracteres, siempre terminan con el valor nulo('\0')

*/

void main()
{
    char completo[80];
    char nombre[32] = "Luis";
    char apellido[32] = "Aguilar Soberanes";

    strcpy(completo, nombre);
    strcat(completo, " ");
    strcat(completo, apellido);

    printf("El nombre completo es %s\n", completo);
    printf("La longitud del nombre completo es %ld\n", strlen(completo));
}