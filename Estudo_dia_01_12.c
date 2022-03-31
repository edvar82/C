#include <stdio.h>


    Strlen (char *str)
    {
        int tamanho=0;
        while(*str){
            tamanho++;
            str++;
        }
       return tamanho;
    }
    int main ()
    {
        int t;
        char str1[100];
        printf("\n\nEntre com uma string: ");
        gets(str1);
        t=Strlen(str1);
        printf("\nVoce digitou: \n%s\nCom %d letras\n", str1,t);
        return 0;
    }


