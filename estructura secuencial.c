#include <stdio.h>

int main(void)
{
    int result, x, y;

    printf("ingresa el valor de x: ");
    scanf("%d", &x);
    printf("ingresa el valor de y: ");
    scanf("%d", &y);

    result = x * y;

    printf("El resultado es %d",result);

    return 0;
}
