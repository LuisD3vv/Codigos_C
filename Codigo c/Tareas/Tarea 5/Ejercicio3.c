#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
Hecho por Luis Alejandro Aguilar soberanes FIC UAS / Ciencia de datos 2025 14/05/2025

    Consigna, crear dos funciones que reciban una cadena y segun
    lo ingresado por el usuario, se regresara en mayusculas o minusculas 

glosario-

strcmp - comparar cadenas caracter a caracter
cadena[i] = tolower(cadena[i]); cambia caracter a caracter por su funcion

los punteros aqui los utilice porque son mas faciles de manejar al momento de seleccionar
un elemento del vector, evitano loop´s

argv[0] = a.out
argv[1] = min/may
argv[3] =  Cadena
*/
// Funciones prototipos
void CadenaMinuscula(char cadena[]);
void CadenaMayuscula(char cadena[]);

int main(int argc, char *argv[])
{

    // Apunta al elemento segun su indice.
    char *orden = argv[1];
    char *vector = argv[2];

    if(argc < 3) {
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