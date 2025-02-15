#include <stdio.h>

int main()
{
    char libro[/*tomara solo la cantidad de memoria que requiere esa palabra*/] = "cincuenta sombras de grey"
        // %s indica que se reemplace con el texto
        // \n es un salto de linea
        printf("%s\n", libro);

    return 0;
}