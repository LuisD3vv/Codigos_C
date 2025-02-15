#include <stdio.h>

int main(){
int suma = 0, promedio = 0;
for (int i=90; i<=160; i++) {
	printf("el numero va en %d\n", i);
suma += i;
promedio =  suma /  (160 - 90 + 1);
}
    printf("La suma de los numeros de 90 al 160 es %d\n:", suma);
    printf("el promedio es %d\n:", promedio);

return 0;
}

