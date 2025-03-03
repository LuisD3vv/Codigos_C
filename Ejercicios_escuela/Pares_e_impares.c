#include <stdio.h>

void main () {
    int vector[10];

    for (int i = 0; i < 10; i++) {
        printf("Ingresa un numero: ");
        scanf("%d", &vector[i]);
    }

    printf("\n");
    printf("pares\n");
    for(int i = 0; i < 10; i++){
        if (vector[i] % 2 == 0) {
        printf("%d\n", vector[i]);
        }
    }

    printf("\n");

    printf("impares\n");
    for(int i = 0; i < 10; i++){
        if (vector[i] % 2 != 0) {
        printf("%d\n", vector[i]);
        }
    }
}