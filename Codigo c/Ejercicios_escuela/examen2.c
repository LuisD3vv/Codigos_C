#include <string.h>
#include <stdio.h>

int main()
{
    char alumnos[5][10];

    int i = 0;
    while (i < 5)
    {
        printf("Ingresa el nombre del alumno: ");
        fgets(alumnos[i], 10, stdin);
        alumnos[i][strcspn(alumnos[i], "\n")] = '\0'; // Eliminar salto de línea
        i++;
    }

    // printf("Aqui estan los nombres de los alumnos\n");
    // for (int j = 0; j < 5; j++)
    // {
    //     printf("%s\n", alumnos[j]);
    // }

    float calificaciones[5][3];

    for (int i = 0; i < 5; i++)
    {
        printf("Ingresa la calificaciones de %s\n", alumnos[i]);
        for (int k = 0; k < 3; k++)
        {
            printf("calificacion %d ", k + 1);
            scanf("%f", &calificaciones[i][k]); // se va guardando junto el alumno a de cuenta.
            if (calificaciones[i][k] < 0)
            {
                printf("No puedes tener calificaciones negativas\n");
                k--;
            }
        }
        printf("\n");
    }

    // sumar calificaciones y decir que estan reprobados o viceversa en base a su promedio
    float promedios[5] = {0};

    for (int i = 0; i < 5; i++)
    {
        printf("Las calificaciones del alumno %s\n", alumnos[i]);
        for (int j = 0; j < 3; j++)
        {
            promedios[i] += calificaciones[i][j];
        }
        promedios[i] = promedios[i] / 3;

        if (promedios[i] < 6)
        {
            printf("El alumno %s reprobo\n", alumnos[i]);
        }
        else
        {
            printf("El alumno %s aprobo\n", alumnos[i]);
        }
    }

    return 0;
}