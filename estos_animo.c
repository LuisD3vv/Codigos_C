#include <stdio.h>

int main()
	{
	int eleccion = 0, bucle=1;

        while(bucle==1){

	printf("Ingresa un numero del 1 al 10 para conocer tu frase: ");
	scanf("%d",&eleccion);

	switch (eleccion){

	case 1:
		printf("El exito consiste en ir del fracaso en fracaso sin perder el entusiasmo.\n");
	break;

	case 2:
		printf("Cree que puedes y ya estaras a medio camino.\n");
	break;
	case 3:
		printf("El secreto de salir a delante es comenzar.\n");
	break;

	case 4:
		printf("El unico modo de hacer un gran trabajo es amar lo que haces.\n");
	break;

	case 5:
		printf("Nuestra mayor gloria no esta en no caer nunca, sino en levantarnos cada vez que caemos.\n");
	break;

	case 6:
		printf("Lo que obtienes al lograr tus metas no es tan impoortante como en lo que te conviertes al lograrlas.\n");
	break;

	case 7:
		printf("Si quieres hacer del mundo un lugar mejor, mirate y haz el cambio.\n");
	break;

	case 8:
		printf("Pueden tener preso al cuerpo, pero la mente siempre sera libre.\n");
	break;

	case 9:
		printf("No es lo que miras lo que importa, si no lo que ves.\n");
	break;

	case 10:
		printf("Se el cambio que quieres ver en el mundo.\n");
	default:
		printf("Porfavor, ingresa un numero dentro del rango (1-10).\n");
	break;

	}//fin switch

        printf("Deseas intentar con otro numero? (1.si 2.no)\n");
        scanf("%d",&bucle);
  
        if (bucle == 2){
         printf("Hasta pronto!!\n");
        }

        }//Fin while

	return 0;
}

