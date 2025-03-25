#include <stdio.h> 
#include <string.h>
#include <ctype.h>

int main() {
    char nombre[50];

    printf("Ingresa tu nombre: ");
    if (fgets(nombre, sizeof(nombre), stdin) != NULL)//diferente a un valor nulo.
    {
        printf("El nombre ingresado es :%s\n ", nombre);
    }
    else {
        printf("Ha habido un error de lecura.\n");
    }

    //int largo_nombre = strlen(nombre);
    int largo_nombre2 = sizeof(nombre) / sizeof(nombre[0]);

    for(int i = 0; i < largo_nombre2; i++){
        if(islower(nombre[i]))
        nombre[i] = toupper(nombre[i]);
        printf("%c ",nombre[i]);
    }
    return 0;
}