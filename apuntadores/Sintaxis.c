#include <stdio.h>
void sumarDiez(int *n);//decirle que reciba un parametro que sera entero y apuntara a la direccion del argumento
//Un puntero es basicamente una varibable que almacena la direccion de otra variable
int main() {
int x = 10;
sumarDiez(&x);
    printf("%d\n",x);
    return 0;
}

void sumarDiez (int *n) { //la direccion del argumento
    *n+=10;
}
//En c hay dos maneras de pasar un argumento a una funcion, por valor y por referencia

//Ejemplo bien, el copilador mierda esta mal configurado

#include <stdio.h>
    
void intercambiar(int *a, int *b);

int main() {
    int a = 1, b = 1;
    intercambiar(&a,&b);
    printf("Nuevos valores a %d b `%d", a,b);
    return 0;
}
void intercambiar(int *a, int *b) {
    *a = 15;
    *b = 10;
}
#include <stdio.h>

int sumarArreglo(int *arr, int tam);


int main() {
	int vector[] = {1,2,3,4,5,6,7,8,9,10};
	printf("Suma total %d",sumarArreglo(vector, 10));

	return 0;
}

int sumarArreglo(int *arr, int tam) {
    int total = 0;
    for(int i = 0; i < tam; i++) {
        total += arr[i];
        
    }
    return total;
}
#include <stdio.h>

void asignarCien(int *x);

int main() {
    int n = 10;
    asignarCien(&n);
    printf("Nuevo valor %d", n);
    return 0;
}

void asignarCien(int *x){
    *x = 100;
}
#include <stdio.h>

void corregirNegativo(int *numero);


int main() {
    int numerito = -1;
    corregirNegativo(&numerito);
    printf("corregido %d",numerito);
}

void corregirNegativo(int *numero){
    if(*numero < 0) {
        *numero = 0;
    }
}
#include <stdio.h>

void operar(int *a,int *b, int *suma, int *resta, int *producto);

int main () {
	int a =20, b = 15, suma = 0, resta = 0, producto = 0;
	operar(&a,&b,&suma,&resta,&producto);
	printf("resultado suma %d\n",suma);
	printf("resultado resta %d\n",resta);
	printf("resultado producto %d\n",producto);

	return 0;

}
void operar(int *a,int *b, int *suma, int *resta, int *producto) {
	*suma = *a + *b;
	*resta = *a - *b;
	*producto = *a * *b;

}

#include <stdio.h>

void Mayor(int *a, int *b,int *c, int *mayor);

int main() {
	int  a = 11,b= 34,c =58,mayor;
	Mayor(&a,&b,&c,&mayor);
	printf("El mayor es %d", mayor);


	return 0;
}

void Mayor(int *a, int *b,int *c, int *mayor) {
	if(*a > *b && *a > *c) {
		*mayor = *a;
	}
	else if(*b > *a && *b > *c) {
		*mayor = *b;
	}
	else if (*c > *a && *c > *b) {
		*mayor = *c;
	}
}

/*Es una forma sencilla de modificar valores directamente
sin hacernos muchas bolas, ya que no tenemos que pasar nada mas que
su direccion e incluso modificarla directamente si no se cumple alguna condicion */

#include <stdio.h>
#include <ctype.h>

void convertirMayusculas(char *cadena);

int main () {
	char texto[] = "Lusito";
	convertirMayusculas(texto);
	printf("Mayusculas %s", texto);

	return 0;
}

void convertirMayusculas(char *cadena) {
	for(int i = 0; cadena[i] != '\0'; i++) {
		if(islower(cadena[i])) {
			cadena[i] = toupper(cadena[i]);
		}
	}
}