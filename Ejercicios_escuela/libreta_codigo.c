#include <stdio.h>

int main () {

    int a,b, c ;
    char op;


    printf("Escriba expresion (ej. 5 + 6) = ");
    scanf("%d %c %d",&a,&op,&b);

    switch (op) {
    case '+':
        printf("%d\n", a + b);
        break;
        
    case '-':
        printf("%d", a-b);
        break;

    case '*':
        printf("%d", a * b);
        break;
    case '/':
        printf("%d", a / b);
        break;

    default:
        printf("ingresa un valor correcto\n");

    }

    return 0;
}