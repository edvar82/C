#include <stdio.h>
int main(){
    char str[51], copia[51];
    int i=0, compstr;

    printf("Digite a string: ");
    gets(str);

    /*Criar o tamanho da string pelo compstr*/

    for(compstr=0;str[compstr];compstr++);

    /*inverter a string*/

    while(str[i] != '\0'){
        copia[i]=str[compstr-i-1];
        i++;
    }
    copia[i]='\0';
    printf("String invertida: %s",copia);
    return 0;
}




