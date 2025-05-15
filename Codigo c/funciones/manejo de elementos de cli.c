#include <stdio.h>

int contarCaracteres(int argc, char *argv[], char letra);

int main(int argc, char *argv[]) {
    char letra = 'a'; // usar comillas simples para un carácter, "" es para cadenas, un solo caracter no necesita vector.

    int cantidad = contarCaracteres(argc, argv, letra);
    printf("La cantidad de '%c' es: %d\n", letra, cantidad);

    return 0;
}

int contarCaracteres(int argc, char *argv[], char letra) { // como estos parametros, es especifico el vector de caracteres es un puntero, se debe de pasar como tal
    int suma = 0;

    for (int i = 1; i < argc; i++) { // empezamos desde 1 para omitir el nombre del programa, solamente aqui esta bien el argc porque son los elementos en general y no letra por letra
        for (int k = 0; argv[i][k] != '\0'; k++) { // recorrer cada caracter de la cadena
            if (argv[i][k] == letra) {
                suma++;
            }
        }
    }

    return suma;
}
