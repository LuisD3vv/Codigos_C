#include <stdio.h>

void ModificarArreglo(int *arr ,int n);

int main (int argc, char *argv[]) {
    int vector[] = {2,4,6,8,10,12,14,16,18,20};
     for(int i = 0; i< 10; i++){
        printf("Elemento %d %d\n",i + 1, vector[i]);
    }
    printf("\n");
    ModificarArreglo(vector,10);
    for(int i = 0; i< 10; i++){
        printf("Elemento %d %d\n",i + 1, vector[i]);
    }
    return 0;
}

void ModificarArreglo(int *arr,int n) {
    for(int i = 0; i < n;i++) {
        arr[i] *= 2;
    }
}
