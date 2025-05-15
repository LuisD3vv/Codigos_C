#include <stdio.h>
#include <string.h>
#include <ctype.h>

void CadenaMinuscula(char cadena[]);
void CadenaMayuscula(char cadena[]);
void CadenaInvertida(char cadena[], char invertida[]);

int main(int argc, char *argv[])
{

    // Apunta al elemento segun su indice.
    char *orden = argv[1];
    char *vector = argv[2];

    char CadenaInver[30];

    if (argc < 3)
    {
        printf("Ingresa la operacion{min/may}/[texto] -> %s", argv[0]);
        return 1;
    }

    if (strcmp(orden, "-min") == 0)
    {
        CadenaMinuscula(vector);
        printf("Cadena en minuscula %s", vector);
    }
    else if (strcmp(orden, "-may") == 0)
    {
        CadenaMayuscula(vector);
        printf("Cadena en mayuscula %s", vector);
    }
    else if (strcmp(orden, "-inv") == 0)
    {
        CadenaInvertida(vector, CadenaInver);
        printf("Cadena invertida %s", CadenaInver);
    }
    return 0;
}

void CadenaMinuscula(char cadena[])
{
    int len = strlen(cadena);
    for (int i = 0; i < len; i++)
    {
        cadena[i] = tolower(cadena[i]);
    }
}
void CadenaMayuscula(char cadena[])
{
    int len = strlen(cadena);
    for (int i = 0; i < len; i++)
    {

        cadena[i] = toupper(cadena[i]);
    }
}
void CadenaInvertida(char cadena[], char invertida[]){
    int largo = strlen(cadena);

    for (int i = 0; i < len; i++) {
        invertida[i] = original[len - 1 - i];
    }

    invertida[len] = '\0';
}
