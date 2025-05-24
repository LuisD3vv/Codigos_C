#include <stdio.h>

void intercambiar(int *a, int *b);

int main() {
    //Valores originales:
	int x = 5; 
	int y = 8;
	
	printf("Numeros originales: x-%d y-%d\n", x,y);
    intercambiar(&x,&y);// aqui magia.
    printf("Numeros inversos: x-%d y-%d", x, y);
}

void intercambiar(int *a, int *b) {
    //cambiamos el contenido de las direcciones  proporcionadas como argumentos
	*a = 8, *b = 5;
}

#include <stdio.h>

//otro ejemplo de pasar referencias.

void limpiar_negativo(int *num);

int main(){
    int n = -11;
    limpiar_negativo(&n);
    printf("%d",n);
    
}
void limpiar_negativo(int *num) {
    if(*num < 0) {
        *num = 0;
    }
}

//Otro ejercicio

#include <stdio.h>

void calcular_doble_triple(int num, int *doble, int *triple);

int main () {
    int n= 5;
    int doble= 0, triple = 0;
    
    calcular_doble_triple(n,&doble,&triple);
    printf("El numero '%d': doble [%d] triple [%d]. ",n, doble, triple);
}

void calcular_doble_triple(int num, int *doble, int *triple){
    *doble = num * 2;
    *triple = num * 3;

    //
}
    #include <stdio.h>

void contar_signos(int *arr, int n, int *positivos, int *negativos);

int main () {
	int vector[] = {1,2,3};
	int positivos = 0, negativos = 0;
	contar_signos(vector, 3, &positivos, &negativos);
	
	printf("Positivos [%d]: Negativos [%d] ",positivos, negativos);
}
void contar_signos(int *arr, int n, int *positivos, int *negativos) {
	for(int i = 0; i < n; i++) {
		if(arr[i] % 2 == 0) {
			*positivos += 1;
		}
		else
		{
			*negativos+= 1;
		}
	}
}
//Crear una función que cuente cuántas vocales hay en una cadena.

#include <stdio.h>

int contar_vocales(char *cadena);

int main(){
    char vector[] = "Hola mundo";
    printf("Total de vocales: %d",contar_vocales(vector));
    return 0;
}
int contar_vocales(char *cadena) {
   int resultado = 0;
    for(int i = 0; cadena[i] != '\0'; i++) {
        if(cadena[i] == 'a'||
          cadena[i] ==  'e'||
          cadena[i] ==  'i'||
          cadena[i] ==  'o'||
          cadena[i] ==  'u'){
              resultado +=1;
          }
    }
    return resultado;
}
#include <ctype.h>

void a_mayusculas(char *cadena);

int main() {
    char vector[] = "luis";
    
    a_mayusculas(vector);
    printf("%s",vector);
    return 0;
}
void a_mayusculas(char *cadena){
    for(int i = 0; cadena[i] != '\0'; i++){
    cadena[i] = toupper(cadena[i]);
    }
}
#include <stdio.h>

int contar_caracter(char *cadena, char c);

int main () {
	char vector[] = "Luis alejandro aguilar soberanes";
	char caracter = 's';
	printf("%d",contar_caracter(vector,caracter));


	return 0;
}
int contar_caracter(char *cadena, char c) {
	int total = 0;
	for(int i = 0; cadena[i] != '\0'; i++) {
		if(cadena[i] == c) {
			total += 1;
		}
	}
	return total;
}