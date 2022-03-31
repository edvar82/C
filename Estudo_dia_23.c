#include <stdio.h>
int main(){
    int count;
    char str1[100], str2[100];
    printf("Digite uma string: \n");
    scanf("%s",&str1);
    for (count=0; str1[count];count++)
        str2[count]=str1[count];
    str2[count]='\0';
    printf("String copiada: %s",str2);
    return 0;
}
