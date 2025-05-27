#include <stdio.h>

void swap(int *a, int *b);


int main() {
	int x = 9, y = 18;
	printf("%d %d\n", x, y);
	swap(&x, &y);
	printf("%d %d\n", x, y);
}

void swap(int *a, int *b) {
	int temp = *a; // creacion de variable temporal intermedia.
	*a = *b;
	*b = temp;
}