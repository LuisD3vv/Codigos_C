/* Hacer un codigo que reciba los nombres de 5 estudiantes
y que de cada uno reciba 3 calificaciones
verificar que el numeor introducido sea mayor a 0
sacar el promedio y veriifcar que sea mayor a 60,
de lo contrario imprimir repriobado junto con el nombre del
estudiante
*/

#include <stdio.h>

int main()
{
    typedef struct alumnos
    {                             // Almacenar los diferentes estudiantes
        char nombre[10];          // almacenar los nombres
        double calificaciones[3]; // almacenar las calificaciones
    } Alumnos;

    Alumnos Alumno[5]; // Se crean 5 instancias del mismo objeto

    for (int i = 0; i < 5; i++)
    {
        printf("Nombre: ");
        scanf("%s", Alumno[i].nombre);
        int j = 0;
        while (j < 3) // 0,1,2
        {
            printf("Ingresa calificacion: (1-10) %d ", j + 1);
            scanf("%lf", &Alumno[i].calificaciones[j]);

            if (Alumno[i].calificaciones[j] > 0)
            {
                j++; // solamente si la calificaicon es mayor se aumenta
            }
            else
            {
                printf("Porfavor, ingresa un numero mayor a 0\n");
            }
        }
    }

    // Loop para promediar e impresiones

    float promedio[5]; // sumar las 3 calificaciones
    printf("\n");
    printf("Impresion de calificiones\n");
    for (int i = 0; i < 5; i++) // Cada iteracion es un alumno
    {
        printf("Nombre: %s\n", Alumno[i].nombre);
        int suma = 0; // suma fuera del bucle interno para poder utilizarlo en el promedio
        for (int j = 0; j < 3; j++)
        {
            printf("Calificaciones: %.2lf\n", Alumno[i].calificaciones[j]);
            suma += Alumno[i].calificaciones[j]; // cada iteracion dentro de las 5, itera 3, es decir 15
        }
        promedio[i] = suma / 3.0;
        if (promedio[i] >= 6.0)
        {
            printf("El alumno %s paso con", Alumno[i].nombre);
        }
        else
        {
            printf("El alumno %s reprobo con", Alumno[i].nombre);
        }
        printf("%2.f\n", promedio[i]);
        printf("Suma de %s: %d\n", Alumno[i].nombre, suma);
    }
    return 0;
}

//Ejercicio

/*Ejercicio: Encontrar al mejor alumno 🔥

Vamos a hacerlo en pasos:
Objetivo:

Encontrar al alumno con el promedio más alto después de haber ingresado las calificaciones.
Pasos:

    Calcular los promedios de todos los alumnos, como lo has hecho.

    Buscar al alumno con el promedio más alto.

    Imprimir el nombre de ese alumno y su promedio.

🧠 Pistas:

    Debes tener un nuevo ciclo después de calcular todos los promedios, en el que comparas los promedios de los 5 alumnos para encontrar el más alto.

    Puedes usar una variable para almacenar el índice del alumno con el mejor promedio.

👨‍💻 Guía paso a paso:

    Calcular los promedios (esto ya lo tienes hecho).

    Después de calcular todos los promedios, compara cada promedio con el anterior y guarda cuál es el mayor.

    Una vez encontrado el mejor promedio, muestra el nombre del alumno con el promedio más alto.

¿Listo para intentarlo? 😎

Divide la tarea en partes:

    Calcula los promedios (ya lo hiciste). ✅

    Encuentra al mejor. 🔍

¡Te dejo que lo intentes! Avísame si necesitas ayuda en algún paso. */