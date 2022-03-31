#include <stdio.h>
#include <locale.h>

void Mensagem(void);
void main (void)
{
    setlocale(LC_ALL,"Portuguese");
    Mensagem();
    printf("\tDiga novamente:\n");
    Mensagem();
}
void Mensagem(void)
{
    printf("Olá, Eu estou vivo!");
}

