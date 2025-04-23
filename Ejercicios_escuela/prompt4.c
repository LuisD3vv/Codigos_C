#include <stdio.h>
int main() {

int val1 = 4, val2 = 4, val3 = 4;

if (val1 == val2 && val2 == val3){
	printf("Los 3 numeros son iguales\n");
}
else {
	if(val1 > val2 && val1 > val3){
		printf("El numero mayor es: %d\n", val1);
	}
	else if(val2 > val3){
		printf("EL numero mayor es: %d\n", val2);
	}
	else{
		printf("el numero mayor es %d\n",val3);
	}
}
return 0;
}
