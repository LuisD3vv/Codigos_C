/*
Luis Alejandro Aguilar Soberanes | Facultad de Informatica Culiacan 2025
*/

//Dados la lectura de una hora (hora, segundos y minutos)

#include <stdio.h>

int main(){
    int horas, minutos, segundos;

    printf("Ingresa una hora de la siguiente manera H M S: ");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    if (horas > 23 || minutos > 59 || segundos > 59) { 
        printf("Ingresa una hora valida.\n");
        return 1;
    }   

    printf("La hora en un segundo despues sera: %02d:%02d:%02d\n", horas,minutos,segundos + 1);

    return 0;
}

/*
Busque por fuera el formato para poder imprimir los digitos, en este caso con 0 y el numero ingresado
*/