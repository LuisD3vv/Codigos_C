#include <stdio.h>

int main() {

	int a,b;

	printf("Introduce el numero inicial: ");
	scanf("%d",&a);
	printf("Introduce el numero final: ");
	scanf("%d",&b);

	if(a>b) {
		printf("El numero inicial debe de ser menor que el final.");
		return 1;
	}
	
	for(int i = a; a<b; a++) {
	    if(a %2 == 0)
		printf("%d ", a);
	}
	return 0;
}