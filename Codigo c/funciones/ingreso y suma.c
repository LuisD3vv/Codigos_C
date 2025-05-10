#include <stdio.h>

int FuncionSuma(int vector[], int n);


int main(){
    int vector[5];
    
    for(int i = 0; i < 5; i++) {
        printf("ingresa el %d numero: ",i + 1);
        scanf("%d", &vector[i]);
    }
    printf("La suma es: %d",FuncionSuma(vector,5));
}

int FuncionSuma(int vector[], int n){
   int sumatoria = 0;
   for(int k = 0; k < n; k++) {
       sumatoria += vector[k];
   }
   return sumatoria;
}
