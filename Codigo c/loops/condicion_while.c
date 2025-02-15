#include <stdio.h>

int main() {

  int cond = 0;

     while(cond < 10){ 
      cond++;
      printf("\n");
      printf("Tabla de multiplicar de :%d\n", cond);

     for(int i = 1; i<=10; i++){
       printf("%d x %d = %d \n",cond, i, i* cond);
  }
  }
return 0;

}
