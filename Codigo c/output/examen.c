#include <stdio.h>

int main()
{
    int ppalomitas = 12, pgalletas = 15, pjaztea = 19, ppan = 15, ppower = 26;
    int cnt_palomitas, cnt_galletas, cnt_jaztea = 0, cnt_pan = 0, cnt_power = 0;
    int op_palomitas, op_galletas, op_jaztea, op_pan, op_power;
    int bucle = 1, opcion = 0, total_parcial;
    float desc, total;

    while (bucle == 1)
    {
        printf("Nuestro menu\n1-Palomitas\n2-galletas\n3-jaztea\n4-powerade\n5-Pan\n6-Salir\n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("cantidad de palomitas: ");
            scanf("%d", &cnt_palomitas);
            op_palomitas = cnt_palomitas * ppalomitas;
            break;
        case 2:
            printf("cantidad de galletas: ");
            scanf("%d", &cnt_galletas);
            op_galletas = cnt_galletas * pgalletas;
            break;
        case 3:
            printf("cantidad de jaztea: ");
            scanf("%d", &cnt_jaztea);
            op_jaztea = cnt_jaztea * pjaztea;
            break;
        case 4:
            printf("cantidad de power: ");
            scanf("%d", &cnt_power);
            op_power = cnt_power * cnt_power;
            break;
        case 5:
            printf("cantidad de pan: ");
            scanf("%d", &cnt_pan);
            op_pan = cnt_pan * ppan;
            break;
        case 6:
            break;
        default:
            printf("ingresa un numero correcto\n");
            break;
        } // fin switch
        printf("Deseas agregar algo mas? (1.si 2.no): ");
        scanf("%d", &bucle);

    } // fin while

    total_parcial = op_palomitas + op_galletas + op_jaztea + op_pan + op_power;

    if (total > 750)
    {
        desc = total_parcial * 0.17;
        total = total_parcial - desc;
        printf("La cantidad con descuento es del %f", total);
    }
    else if (bucle == 2)
    {
        printf("Nos vemos\n");
    }
    else
    {
        printf("El total sin descueto es de %d", total_parcial);
    }
}