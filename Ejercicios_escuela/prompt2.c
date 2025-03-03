#include <stdio.h>

int main () {
    int a;
    printf("Ingresa un numero: ");
    scanf("%d", &a);

    if (a % 2 != 0)
    {
        printf("Tu numero es impar\n");
    }
    else {
        printf("es par\n");
    }
    
}