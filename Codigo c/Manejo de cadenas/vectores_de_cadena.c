#include <stdio.h>
#include <string.h>
#include <ctype.h>

//tomar en cuenta siempre el final de linea '\0' es el fin del "string" por asi decirlo

int main(){
    char frutas[][10]= {"uva","pera","manzana"}; //3 filas y 10 columnas.
    char frutillas[][10] = {"UVA","PERA","MANZANA"};

    // un vector de cadena es similar a esto ['h','o','l','a',' ', 'm','u','n','d','o','\0'] un vecto de elementos indivuales (caracteres.)

    int filas = sizeof(frutas) / sizeof(frutas[0]);
   // int filas = strlen(frutas[0][10]);


    for(int i = 0; i < filas; i++) {
        for(int j= 0; j < 10; j++){
            if(frutas[i][j] != '\0') {
                frutas[i][j] = toupper(frutas[i][j]);
                printf("%c",frutas[i][j]);
            }
        }
        printf("\n");
    }

printf("\n");   

    for(int i = 0; i < filas; i++) {
        for(int j= 0; j < 10; j++){
            if(frutillas[i][j] != '\0') {
                frutillas[i][j] = tolower(frutillas[i][j]);
                printf("%c", frutillas[i][j]);
            }
        }
        printf("\n");
    }


    return 0;
}