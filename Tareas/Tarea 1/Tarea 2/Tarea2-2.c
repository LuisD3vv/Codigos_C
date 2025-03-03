/*
Luis Alejandro Aguilar Soberanes | Facultad de Informatica Culiacan 2025
*/

//Dados 3 valores, determinar el numero del medio

#include <stdio.h>

int main(){
    int a,b,c;
    printf("El orden esta basado en su escala de numeros naturales.\n");
    printf("ingresa 3 valores: ");
    scanf("%d %d %d", &a,&b,&c);
    printf("los valores ingresados son %d, %d, %d\n", a, b,c);

    if  (a > b && a < c) { 
        printf("El valor del medio es %d\n",a);
    }
    else if  (a > c && a < b) { 
        printf("El valor del medio es %d\n",a);
    }
    else if  (b > c && b < a) { 
        printf("El valor del medio es %d\n",b);
    }
    else if (b > a && b < c )  {
        printf("El valor del medio es %d\n",b);
    }
    else if  (c > b && c < a) { 
        printf("El valor del medio es %d\n",c);
    }
    else if  (c > a && c < b) { 
        printf("El valor del medio es %d\n",c);
    }
    else if (a == b && b == c) {
        printf("los valores son iguales\n");
    }
    else if (a == b || c == b) { 
        printf("Para conocer el valor del medio, debe de haber 3 diferentes.\n");
    }
    else {
        printf("Error.\n");
    };
    return 0;
}


