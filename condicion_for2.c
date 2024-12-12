#include <stdio.h>

int main()
{
	for(int i=100; i<=250; i++){
		printf("\n"); 
      	   printf("La tabla del %d:\n", i); 
	  for(int k =1; k<=10; k++){
		int multi = i * k;
		printf(" %d x %d = %d\n",i,k,multi);
       }
          }
  return 0;
}
