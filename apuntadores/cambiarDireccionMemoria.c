#include <stdio.h>


// int main () {
// int vector[50];
//     int *ptr;
//     ptr = &vector[5];

//     int valor = 3;
//     for(int i = 0; i <10; i++) {
//         *ptr = valor; // modifica el valor en el indice que esta actualmente
//         ptr ++;
//         valor += 3;
//     }
//     for(int k= 0; k< 50; k++) {
//         printf("%d %d\n",k, vector[k]);
//     }
//     return 0;
// }


int main (){
    int vector[20];
    int *ptr;
    ptr = &vector[1];
    int valor 5;
    for (int i = 0; i < 20; i++)
    {
        *ptr = valor;
        ptr ++;
        valor += 5;
    }
    for (int i = 0; i < 20; i++)
    {
        printf("%d", vector[i]);
    }

    return 0;
}