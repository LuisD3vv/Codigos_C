#include <stdio.h>

int main (){
    int matriz[10]={1,2,3,4,5,6,7,8,9,10};

    int n = sizeof(matriz) / sizeof(matriz[0]);

    for (long i = 0; i < n; i++)
        printf("%d\n",matriz[i]);

    return 0;

}