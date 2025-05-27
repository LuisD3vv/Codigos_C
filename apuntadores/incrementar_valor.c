#include <stdio.h>

int incrementar(int *a);

int main () {

    int n = 0;
    printf("Valor original de n %d\n", n);
    incrementar(&n);
    printf("Valor nuevo %d",n);
    return 0;
}
    
int incrementar(int *a) {
    for(int i = 0; i < 10;i++) {
        *a += i;
    }
}
