#include <stdio.h>
#include <string.h>
#include <ctype.h>

int j;

int main(int argc, char const *argv[])
{
    char palabra[80];

    scanf("%s", &palabra);

   // fgets(palabra, sizeof(palabra), stdin);
    j=0;
    while (palabras[i] != '\0')
    {
        palabras[i] = toupper(palabra[i]);
        j++;
    }
    printf("%c ", palabra[i]);
    

    return 0;
}
