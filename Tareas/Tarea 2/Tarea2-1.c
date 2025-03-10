/*
Luis Alejandro Aguilar Soberanes | Facultad de Informatica Culiacan 2025
*/

//Dados dos valores enteros enteros, determinar el valor de la division sin utilizar operadores de division
#include <stdio.h>

void main () {
    int a, b, result = 0, residuo =0;

    printf("ingresa dos numeros (eje. 10 / 5): ");
    scanf("%d %d", &a, &b);

    while (a > 0 && a >= b)
    {
        a -= b; // usando operadores de asignacion /  a = a-b
        result ++;
    }
    residuo = a;
    printf("El resultdo es %d y el residuo es %d\n", result, residuo);
}

/* 

# Este codigo lo que hace es que compara el valor de a con el de b, y si cumple con la condicion va restando y asignando a -b
un ejemplo seria a=10, b=5,

# empezara dando vueltas y dice a si es mayor a cero y a es mayor que b o igual, ahi resultado suma uno, y asi la segunda vez cuando a ya es menor que b, porque este mismo se le resto
entonces se sale del bucle y se imprime el resultado. 

# De otro modo, si la division tiene residuo, simplemente es cuando se rompre la segunda condicion
es decir a tendria que ser tambien mayor que b, pero como no lo es se sale del bucle, por ejemplo 7 entre 2, da dos vueltas hasta que la segunda condicion ya no se cumple
y al ultimo el valor se reasigna con lo que quedo de a, al ya ser menor que b, es decir 1.

*/
