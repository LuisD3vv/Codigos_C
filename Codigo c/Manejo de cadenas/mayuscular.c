#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frutas[][10] = {"luis", "eduardo", "fatima", "papa"};

    for(int i = 0; i < 4; i++){ 
      for (int j = 0; j < 10; j++){
        if (islower(frutas[i][j])) {
            frutas[i][j] = toupper(frutas[i][j]);
            printf("%c",frutas[i][j]);
      }
      }
      printf("\n"); 
    }
      
    return 0;
}