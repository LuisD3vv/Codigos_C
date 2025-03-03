#include <stdio.h>

void main(){
	int i=1, n;
	
	printf("Escribe numero de la tabla: ");
	scanf("%d", &n);
	do {
		printf("%4d * %4d = %4d\n", i,n,i*n);
		i++;
	}
	while(i<=10);
}
