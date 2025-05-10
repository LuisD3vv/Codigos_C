#include <stdio.h>

//Declarar funcion prototipo
void reemplazarVocales(char cadena[]);

int main() {

    char cadenita[10];

    printf("ingresa una cadena: ");
    fgets(cadenita, sizeof(cadenita), stdin);
    cadenita[strcspn(cadenita, '\n')] = '\0';
    //con esta funcion buscamos ese caracter y lo sustituimos
    //util para eliminar el salto usando fgets

    //size_t strcspn(const char *str1, const char *str2); vector[sustituir caracter,funcion(vector o cadena, "caracter a sustituior")] = "por lo que cambia"
    reemplazarVocales(cadenita);
    printf("%s",cadenita);
    return 0;
}
// si el caracter es igual a una vocal, este se reemplaza
void reemplazarVocales(char cadena[]) {
    int i = 0;
    while (cadena[i] != '\0') {
        if (cadena[i] == 'a' || cadena[i] == 'A' ||
            cadena[i] == 'e' || cadena[i] == 'E' ||
            cadena[i] == 'i' || cadena[i] == 'I' ||
            cadena[i] == 'o' || cadena[i] == 'O' || 
            cadena[i] == 'u' || cadena[i] == 'U') {
            cadena[i] = '*'; // se tiene que asginar no comparando
             } //if
        i++;
    }//while
}
