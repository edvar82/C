#include <stdio.h>

// 0 - WILLY || 1 - RODRIGO || 2 - EMPATE

int vencedor(int num1, int num2)
{
    if ((num1 == 1 && num2 == 3) || (num1 == 3 && num2 == 2) || (num1 == 2 && num2 == 4) || (num1 == 4 && num2 == 5) || (num1 == 5 && num2 == 1) || (num1 == 1 && num2 == 4) || (num1 == 4 && num2 == 3) || (num1 == 3 && num2 == 5) || (num1 == 5 && num2 == 2) || (num1 == 2 && num2 == 1))
    {
        return 1;
    }
    else if (num1 == num2)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

int main()
{
    double bet_rodrigo, bet_willy, valor;
    int round1_rodrigo, round2_rodrigo, round1_willy, round2_willy, round1, round2, r1_result, r2_result;
    scanf("%lf %lf %d %d %d %d", &bet_rodrigo, &bet_willy, &round1_rodrigo, &round1_willy, &round2_rodrigo, &round2_willy);

    round1 = vencedor(round1_rodrigo, round1_willy);
    round2 = vencedor(round2_rodrigo, round2_willy);

    if (round1 == 0)
    {
        printf("Willy venceu a partida 1\n");
        r1_result = 0;
    }
    else if (round1 == 1)
    {
        printf("Rodrigo venceu a partida 1\n");
        r1_result = 1;
    }
    else
    {
        printf("Empate\n");
        r1_result = 2;
    }

    if (round2 == 0)
    {
        printf("Willy venceu a partida 2\n");
        r2_result = 0;
    }
    else if (round2 == 1)
    {
        printf("Rodrigo venceu a partida 2\n");
        r2_result = 1;
    }
    else
    {
        printf("Empate\n");
        r2_result = 2;
    }

    if ((r1_result == 2 && r2_result == 2) || (r1_result == 1 && r2_result == 0) || (r1_result == 0 && r2_result == 1))
    {
        printf("Empate na aposta\n");
    }
    else if ((r1_result == 0 && r2_result == 0) || (r1_result == 2 && r2_result == 0) || (r1_result == 0 && r2_result == 2))
    {
        printf("Willy foi o vencedor da aposta\n");
        if (r1_result == 0 && r2_result == 0)
        {
            printf("Valor ganho: R$%.2lf\n", bet_rodrigo + bet_willy + ((bet_rodrigo + bet_willy) * 0.1));
        }
        else
        {
            printf("Valor ganho: R$%.2lf\n", bet_rodrigo + bet_willy + ((bet_rodrigo + bet_willy) * 0.05));
        }
    }
    else
    {
        printf("Rodrigo foi o vencedor da aposta\n");
        if (r1_result == 1 && r2_result == 1)
        {
            printf("Valor ganho: R$%.2lf\n", bet_rodrigo + bet_willy + ((bet_rodrigo + bet_willy) * 0.1));
        }
        else
        {
            printf("Valor ganho: R$%.2lf\n", bet_rodrigo + bet_willy + ((bet_rodrigo + bet_willy) * 0.05));
        }
    }

    return 0;
}

// https://www.thehuxley.com/problem/3587?quizId=7484