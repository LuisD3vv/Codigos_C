/*
|====================================|
|PROYECTO EN C: GESTOR DE ESTUDIANTES|
|====================================|

Crear un programa que gestione hasta 100 estudiantes (sin memoria dinámica).
Cada estudiante tendrá:
- Nombre (cadena de caracteres)
- Edad (entero)
- Calificación final (float)

obviamente que permita cambiar calificaciones y sacar promedios

utilizando funciones para meter alumnos, consultar disponibles

ordenar por calificacion

calcular priomedio general
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int op;

void mostrarAlumnos();
void promedio();

typedef struct Gestor_estudiantes
{
    char nombre[20];
    int edad;
    double calificaciones[3]; // de ocho asigaturas
} Alumnos;

Alumnos Alumno[3];

int main(int arc, char *argv[])
{

    do
    {
        printf("Bienvenido!, aqui tienes nuestro MENÚ:\n");
        printf("1. Ingresar Alumno\n");
        printf("2. Mostrar todos\n");
        printf("3. Buscar por nombre\n");
        printf("4. Ordenar por Calificacion\n");
        printf("5. Calcular promedio\n");
        printf("6. Actualizar calificacion\n");
        printf("7. Imprimir nombres en mayusculas\n");
        printf("0. Salir\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            for (int i = 0; i < 3; i++)
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
                        j++;
                    }
                    else
                    {
                        printf("Porfavor, ingresa un numero mayor a 0\n");
                    }
                }
            }
            break;
        case 2:
            printf("Alumnos disponibles\n");
            for (int i = 0; i < 3; i++)
            {
                printf("El alumno %s\n", Alumno[i].nombre);

                for (int j = 0; j < 3; j++)
                {
                    printf("calificaciones %.2f\n", Alumno[i].calificaciones[j]);
                }
            }
            break;
        case 3:
            char n_buscar[20];

            printf("Ingresa el nombre a buscar: ");
            scanf("%s", n_buscar);

            for (int i = 0; i < 3; i++)
            {
                if (strcmp(n_buscar, Alumno[i].nombre) == 0)
                {
                    printf("Alumno encontrado: %s\n", Alumno[i].nombre);
                    for (int j = 0; j < 3; j++)
                    {
                        printf("calificaciones:\n %.2f", Alumno[i].calificaciones[j]);
                    }
                }
                printf("\n");
            }

            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        default:
            printf("Ingresa correctamente los datos solicitados\n");
            break;
        }
    } while (op != 0);
    printf("Has salido.");

    return 0;
}
