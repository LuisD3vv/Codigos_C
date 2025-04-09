/* Luis Alejandro Aguilar Soberanes |  grupo 1-1  | 02/04/2025
   Licenciatura en ciencia de datos FIC  2025
   Universidad autonoma de culiacan
   */

#include <stdio.h>
int main() {
    
    char cadena[1][10];
    
    //conteo vocales
    for(int i = 0; i < 1; i ++){
        printf("Ingresa la cadena: ");
        fgets(cadena, sizeof(cadena), stdin);
    }
    
    int conteo =0;
    for(int i = 0; i < 1; i ++){
        for(int j=0;j<10;j++){
            if(cadena[i][j] == 'a' || cadena[i][j] == 'e' ||
               cadena[i][j] == 'i' || cadena[i][j] == 'o' ||
               cadena[i][j] == 'u' ) {
                conteo += 1;
               }
        }
        printf("se contaron %d vocales\n", conteo);
    }
    //conteo consonantes
    int conteo_consonates=0;

    char consonates[]={   'b','c','d','f','g',
                          'h','j','k','l','m',
                          'n','p','q','r','s',
                          't','w','x','y','z'};
                          
    int consonantes = sizeof(consonates) / sizeof(consonates[0]); // 21
                          
    for(int i=0; i < 1; i++) {
        conteo_consonates=0;
        for(int j=0; j < consonantes; j++){
            for(int k=0; k<10; k++)
            if(cadena[i][k] == consonates[j]) {
                conteo_consonates ++;
            }
        }
        printf("se encontraron %d consonantes\n",conteo_consonates);
    }
    
    int tamanio = sizeof(cadena) / sizeof(cadena[0]);
    
    
    
    //conteo de digitos
   int contar_dig = 0;
   for(int i = 0;i< 1; i++){
       int x=0;
       while(cadena[i][x] != '\0'){
           x+=1;
           contar_dig += 1;
       }
       printf("La cantidad de digitos es de %d\n", contar_dig -1); // sin el caracter nulo.
   }
   
    int contar_espacios = 0;
   for(int i = 0;i< 1; i++){
       for (int j=0; j< 10; j++)
       if(cadena[i][j] == ' '){
           contar_espacios ++;
       }
   }
    printf("Hay %d de espacios\n", contar_espacios);
    //conteo de espacios
    

    
    return 0;
}