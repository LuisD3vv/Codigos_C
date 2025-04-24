/*
Luis Alejandro Aguilar Soberanes Ingenieria en ciencia de datos LICD grupo 1-1

|Facultad de informatica Culiacan | FIC UAS | 2025
*/

#include <stdio.h>

void main()
{
    int n, fila, columna;

    printf("ingresa n: ");
    scanf("%d", &n);

    int matriz[n][n];

    for (fila = 0; fila < n; fila++)
    {
        for (columna = 0; columna < n; columna++)
        {
            printf("Ingresa los valores de la matriz: ");
            scanf("%d", &matriz[fila][columna]);
        }
        printf("\n");
    }

    int vector_suma[fila];

    for (fila = 0; fila < n; fila++)
    {
        vector_suma[fila] = 0;
        for (columna = 0; columna < n; columna++)
        {
            vector_suma[fila] += matriz[fila][columna];
        }
    }

    printf("El vector resultante de la suma es:\n");
    for (fila = 0; fila < n; fila++)
    {
        printf("[%d] ", vector_suma[fila]);
    }
    printf("\n");
}

/*
Lo que se hizo en este programa es sumar todos los elementos de una fila de una matriz, como se logro?
se necesito primero definir que seria una matriz nxn, despues, pedir al usuario ingresar datos para
posteriormemte hacer la suma, el truco esta en inicializar el vector con 0, ya que como sera una suma
acomulativa, no en si una reasignacion como matriz a matriz, se pone en el primer for ya que las filas
del vector(no tiene columnas) son las que se necesitan llenar, aunque igual como abajo se reasigna el valor
+= [fila][columna] es necesario utilizar los dos for de igual forma para que se itere sobre toda la matriz.
*/