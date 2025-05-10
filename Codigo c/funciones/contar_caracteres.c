#include <stdio.h>
#include <string.h>

//Agregando prototipo

int longitudStr(char str[]);

int main() {
    //Al trabajar con vectores de caracteres no se necesita mandar el tamaño si no determianrlo en la nueva funcion
    char nombre[] = {"Luisito"};
    printf("Longitud de la cadena %s %d",nombre,longitudStr(nombre));
    //fgets(nombre, 20, stdin);
    
    return 0;
}

int longitudStr(char str[]){
    int cantidad = strlen(str);
    return cantidad;
    
    
    int i;
    while(str[i] != '\0') {
        i++;
    }
    return i;
}
