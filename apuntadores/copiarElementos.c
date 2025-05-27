#include <stdio.h>

void copiarElementos(int *arr, int *arr2);

int main()
{
    int vector1[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int vector2[10];
    copiarElementos(vector1, vector2);
    // copiarElementos(&vector[0], &vector2[0]);
    /*
    --copiarElementos(&vector, &vector2);
    Cuando se hace esto, se le esta pasando la direccion de todo el arreglo
    no de un solo elemento
     */
    for (int i = 0; i < 10; i++)
    {
        printf("%d %d\n", i + 1, vector2[i]);
    }
    return 0;
}
void copiarElementos(int *arr, int *arr2)
{
    int *ptr;
    ptr = &arr2[0]; // apunta al primer elemento del arreglo
    for (int i = 0; i < 10; i++)
    {
        *ptr = arr[i]; //  el primer elemento se vuelve el mismo del arr[0]
        ptr++; // se mueve hacia el siguiente elemento.
    }
}