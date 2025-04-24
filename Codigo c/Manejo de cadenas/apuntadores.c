#include <stdio.h>


int main() {

    char nombre[][10]={"primero","segundo", "tercero", "cuarto", "quinto", "sexto"};

   for (int i = 0; i < 3; i++)
   {
    printf("%s\n",nombre[i]);
   }

   for(int i = 0; i < 6; i++) {
    for(int k = 0; k < 10; k++){
        if (nombre[i][k] != '\0')
        {
            printf("%d ->[%c] ",k,nombre[i][k] );
        }
        else {
            printf("[NULL] ");
        }
    }
    printf("\n");
   }
   
    
    
    return 0;
}