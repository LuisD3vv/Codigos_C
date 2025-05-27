#include <stdio.h>

void sumaEnteros(int *a,int *b, int *c);

int main () {
    int resultado, a = 5, b = 10;
    sumaEnteros(&a, &b, &resultado);
    printf("Resultado %d", resultado);

    return 0;
}

void sumaEnteros(int *a,int *b, int *c) {
    *c = *a + *b;
}