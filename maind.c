#include <stdio.h>
int main(void)
{
    char string[100];
    int i, cont;
    printf("Digite a string: ");
    gets(string);
    printf("\nFrase digitada: %s",string);
    cont=0;

    for(i=0;string[i] != '\0';i++){
        if(string[i]=='a'){
            cont+=1;
            string[i]='b';
        }
    }
    printf("\nNumero de caracteres trocados: %d\nNova string: %s",cont, string);
}

