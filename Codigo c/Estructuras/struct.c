#include <stdio.h>

void main()
{
    //Struc es una estructura que nos sirve para guardar diferentes tipos de datos pero que de algun moddo estan relacionados entre si
    typedef struct datos //mañana recrear el primer problema del examen pero ahora con este
    {
        char nombre[20];
        int edad;
        float sueldo;
    }Empleados;

    Empleados empleado[3];

    for (int i= 0; i < 3; i++) {
        printf("Nombre: ");scanf("%s",empleado[i].nombre);
        printf("Edad: ");scanf("%d",&empleado[i].edad);
        printf("Sueldo: ");scanf("%f",&empleado[i].sueldo);
           printf("\n");

    }       
    
    printf("Los datos son\n");
    for (int i= 0; i < 3; i++)
    {  printf("Empleado: %d \n", i + 1);
       printf("Nombre: %s \n", empleado[i].nombre);
       printf("Edad: %d  \n",empleado[i].edad);
       printf("Sueldo: %.2f  \n",empleado[i].sueldo);
       printf("\n");
       
    }


} 