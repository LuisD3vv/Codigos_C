#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main () {

    char nombre[20] = "LUISITO";

    printf("El largo de esta palabra es: %ld\n", strlen(nombre));


    printf("String con caracteres nulos o vacios.\n");
    for (int i = 0; i < 20 ; i++)
    {
     printf("%d [%c] ",i,nombre[i]);
    }
    
    printf("\n");

    for ( int i = 0; nombre[i] != '\0'; i++)
    {
        nombre[i] = tolower(nombre[i]);
    }
    printf("String en minusculas: %s\n", nombre);

    

    return 0;
}