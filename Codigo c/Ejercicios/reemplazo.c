#include <stdio.h>

int main() {
    // 'l' comillas simples para carecteres simples

    char cadena[30];
    char reemplazo;
    char buscar;

    printf("Ingresa una cadena: ");
    scanf("%s", cadena); // viene con un salto al final de recibir.
    //hay dos formas de arreglarlo una es limpiando el buffer y otra con unn espacio % c

    printf("Que caracter deseas reemplazar: ");
    scanf(" %c", &buscar); // el espacio evita guardar el salto, util el loops o con varios scanf
    getchar(); // limpiar el buffer

    printf("\n");

    printf("Por cual caracter lo reemplazaras: ");
    scanf(" %c", &reemplazo);

    printf("cadena original %s\n", cadena);
    int k = 0;
    while(cadena[k] != '\0'){
        if(cadena[k] == buscar){
            cadena[k] = reemplazo;
        }
        k++;
    }

    printf("Cadena modificada %s\n", cadena);

    return 0;
}