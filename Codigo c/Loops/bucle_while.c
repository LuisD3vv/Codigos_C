#include <stdio.h>

int main () {
	int a;
	printf("ingresa un numero: ");
	scanf("%d", &a);

	for(int i=0,j=0; a < 100; i++, j++)
		printf("a es %d y el %d",i , j);

	return 0;
}