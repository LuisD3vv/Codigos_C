#include <stdio.h>

void main () {
    int i,j;
    int matriz[2][3]={  //filas por columnas
        {5,4,3},   // [0,1,2]
        {2,1,0}    // [1,1,2]
    };//fin matriz

    for (i = 0; i< 2; i++) {
        for (j= 0; j <3; j++){
            printf("El valor de elemento[%d][%d] es %d\n", i,j,matriz[i][j]);
        }// bucle for anidado
        printf("\n");
    }//primer for
}