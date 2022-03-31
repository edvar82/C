#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int computador, jogador;
    //lógica do jogador
    printf("____________JokenPo_______________\n\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &jogador);
    printf("\n__________________________________\n");
    switch(jogador)
    {
    case 1:
        printf("O jogador escolheu Pedra.\n");
        break;
    case 2:
        printf("O jogador escolheu Papel.\n");
        break;
    case 3:
        printf("O jogador escolheu Tesoura.\n");
        break;
    default:
        printf("Opção invalidan animal.\n");
    }

    //lógica do computador

    srand(time(NULL));
    computador=("%d",rand()%3+1);
    switch(computador)
    {
    case 1:
        printf("O computador escolheu Pedra.\n");
        break;
    case 2:
        printf("O computador escolheu Papel.\n");
        break;
    case 3:
        printf("O computador escolheu Tesoura.\n");
        break;
    }


    //lógica para determinar o verncedor


    if (jogador==computador)
    {
        printf("EMPATE\n");
    }
    else if ((jogador==1 && computador==3) || (jogador==2 && computador==1) || (jogador==3 && computador==2))
    {
        printf("JOGADOR VENCEU.\n");
    }
    else{
        printf("COMPUTADOR VENCEU.\n");
    }
    return 0;
}
