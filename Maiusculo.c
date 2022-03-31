#include <stdio.h>

void maiusculo(char s1[], char s2[]){
    int i =0;
    while(s1[i] != '\0'){
        s2[i]=toupper(s1[i]);
        i++;
    }
    s2[i]='\0';
}


int main(int argc, char const *argv[])
{
    char str[]="Bom dia";
    maiusculo(str,str);
    printf("%s",str);
    return 0;
}
