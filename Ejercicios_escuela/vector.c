#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <string.h>>

  // int matriz[10][10] // filas por columnas en matrices;
  // int vector[10]; // una sola parte

   //#define TAM 20 // macro para declarar un valor sin espacio de memoria/

   int vector[30];
   void main() {
     int i;
     srand(time(NULL)); // semilla mas aleatoria, al contrario de usar srand o rand fijo siempre regresara el mismo numero

   for (i = 0; i < 30; i++) {
      vector[i] = rand() % 100 + 1;
   }

   printf("Vector generado:\n");
   for (i = 0; i < 30; i++) {
      printf("%d ",vector[i]); // los espacios dentro de las comillas tambien existen en el resultdo final.
   }
   printf("\n");
  // printf(sizeof(vector));
   }

