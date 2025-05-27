#include <stdio.h>

int intercambiarValores(int *a, int *b);

int main(int argc, char * argv[])
{
    int y = 10, x = 15;
    printf("valores originales %d %d\n", y, x);
    intercambiarValores(&y, &x);
    printf("Valores nuevos %d %d\n", y, x);
return 0;
}

int intercambiarValores(int *a, int *b)
{
    *a = 15;
    *b = 10;

}