#include <stdio.h>

int main(){
    char str[51], copia[51];
    int cont, i;
    printf("Digite a string: ");
    gets(str);

    for(cont=0;str[cont];cont++);
    
    for(i=0;str[i];i++){
        copia[i]=str[cont-i-1];
    }
    copia[i]='\0';
    printf("String invertida: %s",copia);
}

