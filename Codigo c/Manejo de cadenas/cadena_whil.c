#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char frutas[][10]={"Tomate", "Aguacate", "Zanahoria","Pepino","Lechuga"};
    int j, fila, fila2;

    fila = sizeof(frutas) / sizeof(frutas[0]);
    fila2 = strlen(frutas)-1; //reparando lectura de strlen
        
    printf("%d\n", fila2);
    printf("%d\n",fila);


    for(int i = 0; i< 5; i++) {
        for(int j= 0; j < 10; j++){
          printf("%c ", frutas[i][j]);  
        }
        printf("\n");
    }

    printf("\n");

    //matriz de cambio
    for (int i = 0; i < 5; i++)
    {
        j=0; //generar un incremento que recorra las columnas.
        while (frutas[i][j] != '\0')
        {
        if (islower(frutas[i][j])) {
            frutas[i][j] = toupper(frutas[i][j]);
            
        }else { 
            frutas[i][j] = tolower(frutas[i][j]);
        }
        printf("%d%c ", j,frutas[i][j]);

            j++;
        }//While
        printf("\n");
    }//For
    return 0;
}//fin main