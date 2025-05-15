#include <stdio.h>
# include <string.h>

int ConVocales(char *palabra); // va a tomar como referencia el puntero de palabra, que apunta al primer elemento de argv
int main(int argc, char *argv[]) { // firma del main
	char *palabra = argv[1]; // guarda el primer elemento (direccion)
    //char culo = *argv[1]; primer caracter de ese elemento si es hola, sera h

	int resultado = ConVocales(palabra); // se envia solo palabra sin el *, ya
	printf("La palabra es %s, contiene %d vocales", palabra ,resultado);

	return 0;
}

int ConVocales(char *palabra) {
	int conVo = 0;
	for(int i = 0; palabra[i] != '\0'; i++) {
		if(palabra[i] == 'a' ||
		        palabra[i] == 'e'||
		        palabra[i] == 'i'||
		        palabra[i] == 'o'||
		        palabra[i] == 'u') {
            conVo ++;
		}
	}
	return conVo;
}

// Hay que tener cuidado con los caracteres,
char palabra = "hola"; //un for
char letra = 'a'; // for
char lista[] = {"Luis", "eduardo"}; // dos for, uno para los elemento y uno para caracteres.

/*
Diferencias entre el pinche uso del * y no

dependiendo de la posicion del asterisco nos dira en torno a que se hace referencia y a donde

no es lo mismo:

char *luis = "boquete", apunta a toda la cadena, es igual a jose = luis[0]


otra forma es 


char * apunta a un lugar en memoria (puede ser literal o dinámico)

char[] es un arreglo local en memoria del tamaño justo


char *palabra = "hola";

char palabra[] = "hola"; // otra forma válida de crear una cadena

char letra = 'x';          // un solo carácter
char *cadena = "hola";     // puntero a una cadena

printf("%c\n", *cadena);   // imprime 'h'
printf("%c\n", cadena[1]); // imprime 'o'
*/




// Ejercicio "Analizador de Palabras"
// 🧠 Descripción:
// Crea un programa en C que reciba una o más palabras por línea de comandos y que:

// Cuente la cantidad de vocales de cada palabra.

// Indique cuál palabra tiene más vocales.

// Al final, muestre:

// La cantidad total de vocales

// La palabra con más vocales

// 🧾 Requisitos:
// Usa funciones. Una para contar vocales en una palabra.

// Usa argv para recorrer todas las palabras que el usuario introduzca.

// Usa punteros (char *) correctamente.

// No uses arreglos extra; trabaja directo con los datos que llegan.


//  Ejercicio: Manipulación de Cadenas con Punteros
// Descripción:
// Crea un programa en C que realice las siguientes tareas:

// Solicitar al usuario una cadena (puede ser un conjunto de palabras o una sola palabra).

// Contar cuántas vocales contiene la cadena.

// Invertir la cadena usando punteros.

// Imprimir el resultado:

// Número de vocales en la cadena.

// La cadena original.

// La cadena invertida.

