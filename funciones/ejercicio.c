#include <stdio.h>

void mayor(int primero, int segundo)
{
    if (primero > segundo)
    {
        printf("El numero mayor es: %d\n", primero);
    }
    else
    {
        printf("El numero mayor es: %d\n", segundo);
    }
}
int main()
{
    mayor(2, 4);
    mayor(5, 1);

    return 0;
}
