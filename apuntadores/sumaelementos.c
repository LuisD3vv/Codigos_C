#include <stdio.h>

void suma(int *arr, int n, int *resul);

int main () {
    int arreglo[] = {1,2,3,4,5,6,7,8,9,10}; // 55
    int resultado;
    suma(arreglo,10, &resultado);
    printf("%d", resultado);
    return 0;
}


void suma(int *arr, int n, int *resul){
    for(int i = 0; i < n; i++)
    {
        *resul += arr[i];
    }
    

}