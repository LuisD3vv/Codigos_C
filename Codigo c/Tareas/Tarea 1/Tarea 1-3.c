/*
Fecha de elaboración: 07/02/2025

Hecho por Luis Alejandro Aguilar Soberanes | Licenciatura en ingenieria en Ciencias de Datos UAS 2025

Facultad de Informatica Culiacan. | FIC
*/

//Determinar el area de un triangulo segun los valores ingresados
//este programa nos lo pide en forma de coordenadas, por lo que sera en el plano cartesiano

#include <stdio.h>
#include <math.h>

int main () {
        int bucle = 1, opcion = 0, vertice_a, vertice_b, vertice_c;
        int x1, y1, x2, y2, x3, y3;
        float area;

    while(bucle == 1) {
        // solicitar datos

        printf("porfavor ingresa las coordenadas\n1 = vertice 1 (x,y)\n2 = vertice 2 (x,y)\n3 = vertice 3 (x,y)\n4 conocer resultado\n");
        scanf("%d",&opcion);

        switch (opcion) {

        case 1:
            printf("ingresa el valor x1: ");
            scanf("%d",&x1);
            printf("ingresa el valor y1: ");
            scanf("%d",&y1);
            break;

        case 2:
            printf("ingresa el valor x2: ");
            scanf("%d",&x2);
            printf("ingresa el valor y2: ");
            scanf("%d",&y2);
            break;

        case 3:
            printf("ingresa el valor x3: ");
            scanf("%d",&x3);
            printf("ingresa el valor y3: ");
            scanf("%d",&y3);
            break;
            

        default:
            break;

        } //fin de switch

        if (opcion == 4) {
             break;  //salir del bucle
        }

    } // Fin del while

        // Calculo del area

        area = fabs(x1 *(y2 - y3) + x2 * (y3-y1) + x3 * (y1 - y2)); // convertirla en valor absoluto(no relativo al signo), ya que la formula requiere que sea positivo

        printf("El area es: %.2f\n",area / 2);

        return 0;
}

