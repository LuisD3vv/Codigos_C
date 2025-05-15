#include <stdio.h>
#include <string.h>
/*
Hecho por Luis Alejandro Aguilar soberanes FIC UAS / Ciencia de datos 2025 14/05/2025
*/
void invertirCadena(char original[], char invertida[]);

int main()
{
    char original[] = "Hola mundo";
    char resultado[30];

    invertirCadena(original, resultado);

    printf("Invertida: %s\n", resultado);
    printf("Original: %s\n", original);

    return 0;
}

void invertirCadena(char original[], char invertida[])
{

    int len = strlen(original);

    for (int i = 0; i < len; i++)
    {
        invertida[i] = original[len - 1 - i];
        /*Esto funciona de una manera increiblemente sencilla
        el indice del nuevo vector ba agregando indices en reversa a de cuenta que

        Palabra  = culo, largo = 4
        invertida[i] = original 3 [largo - 1 - i = 0]  o
        invertida[i] = original 2 [largo - 1 - i = 1]  l
        invertida[i] = original 1 [largo - 1 - i = 2]  u
        invertida[i] = original 0 [largo - 1 - i = 3]  c
        */
    }

    invertida[len] = '\0';
}
