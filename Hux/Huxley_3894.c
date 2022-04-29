#include <stdio.h>

#define GUERREIRO 1
#define MAGO 2
#define ARQUEIRO 3
#define PEDRO_GANHOU 1
#define TULIO_GANHOU 0

void bonus_guerreiro(int classe1, int classe2, double *vida1, double *vida2)
{
    if (classe1 == GUERREIRO && classe2 == ARQUEIRO)
    {
        *vida1 *= 1.3;
    }
    else if (classe2 == GUERREIRO && classe1 == ARQUEIRO)
    {
        *vida2 *= 1.3;
    }
}
void bonus_arqueiro(int classe1, int classe2, double *ataque1, double *ataque2)
{
    if (classe1 == ARQUEIRO && classe2 == MAGO)
    {
        *ataque1 *= 1.25;
    }
    else if (classe2 == ARQUEIRO && classe1 == MAGO)
    {
        *ataque2 *= 1.25;
    }
}
void bonus_mago(int classe1, int classe2, double *vida1, double *vida2, double *ataque1, double *ataque2)
{
    if (classe1 == MAGO && classe2 == GUERREIRO)
    {
        *vida1 *= 1.15;
        *ataque1 *= 1.15;
    }
    else if (classe2 == MAGO && classe1 == GUERREIRO)
    {
        *vida2 *= 1.15;
        *ataque2 *= 1.15;
    }
}

int duelo(int classe_pedro, double vida_pedro, double ataque_pedro,
          int classe_tulio, double vida_tulio, double ataque_tulio)
{
    if (vida_tulio < vida_pedro)
    {
        vida_pedro -= ataque_tulio;
        if (vida_pedro > 0)
        {
            vida_tulio -= ataque_pedro;
        }
    }
    else
    {
        vida_tulio -= ataque_pedro;
        if (vida_tulio > 0)
        {
            vida_pedro -= ataque_tulio;
        }
    }
    if (vida_pedro <= 0)
    {
        return TULIO_GANHOU;
    }

    if (vida_tulio <= 0)
    {
        return PEDRO_GANHOU;
    }

    if (vida_pedro != vida_tulio)
    {
        if (vida_pedro > vida_tulio)
        {
            return PEDRO_GANHOU;
        }

        else
        {
            return TULIO_GANHOU;
        }
    }
    else
    {
        if (ataque_pedro > ataque_tulio)
        {
            return PEDRO_GANHOU;
        }

        else
        {
            return TULIO_GANHOU;
        }
    }
}

int main()
{
    int vencedor;
    int pedro_classe_1, pedro_classe_2, pedro_classe_3;
    double pedro_vida_1, pedro_vida_2, pedro_vida_3;
    double pedro_ataque_1, pedro_ataque_2, pedro_ataque_3;
    int pontos_pedro = 0;

    int tulio_classe_1, tulio_classe_2, tulio_classe_3;
    double tulio_vida_1, tulio_vida_2, tulio_vida_3;
    double tulio_ataque_1, tulio_ataque_2, tulio_ataque_3;
    int pontos_tulio = 0;

    scanf("%d %lf %lf", &pedro_classe_1, &pedro_ataque_1, &pedro_vida_1);
    scanf("%d %lf %lf", &pedro_classe_2, &pedro_ataque_2, &pedro_vida_2);
    scanf("%d %lf %lf", &pedro_classe_3, &pedro_ataque_3, &pedro_vida_3);

    scanf("%d %lf %lf", &tulio_classe_1, &tulio_ataque_1, &tulio_vida_1);
    scanf("%d %lf %lf", &tulio_classe_2, &tulio_ataque_2, &tulio_vida_2);
    scanf("%d %lf %lf", &tulio_classe_3, &tulio_ataque_3, &tulio_vida_3);

    bonus_guerreiro(pedro_classe_1, tulio_classe_1, &pedro_vida_1, &tulio_vida_1);
    bonus_arqueiro(pedro_classe_1, tulio_classe_1, &pedro_ataque_1, &tulio_ataque_1);
    bonus_mago(pedro_classe_1, tulio_classe_1, &pedro_vida_1, &tulio_vida_1, &pedro_ataque_1, &tulio_ataque_1);

    vencedor = duelo(pedro_classe_1, pedro_vida_1, pedro_ataque_1, tulio_classe_1, tulio_vida_1, tulio_ataque_1);
    if (vencedor == PEDRO_GANHOU)
    {
        pontos_pedro++;
        printf("Rodada1: Pedro\n");
    }
    else
    {
        pontos_tulio++;
        printf("Rodada1: Tulio\n");
    }

    bonus_guerreiro(pedro_classe_2, tulio_classe_2, &pedro_vida_2, &tulio_vida_2);
    bonus_arqueiro(pedro_classe_2, tulio_classe_2, &pedro_ataque_2, &tulio_ataque_2);
    bonus_mago(pedro_classe_2, tulio_classe_2, &pedro_vida_2, &tulio_vida_2, &pedro_ataque_2, &tulio_ataque_2);

    vencedor = duelo(pedro_classe_2, pedro_vida_2, pedro_ataque_2, tulio_classe_2, tulio_vida_2, tulio_ataque_2);
    if (vencedor == PEDRO_GANHOU)
    {
        pontos_pedro++;
        printf("Rodada2: Pedro\n");
    }
    else
    {
        pontos_tulio++;
        printf("Rodada2: Tulio\n");
    }

    bonus_guerreiro(pedro_classe_3, tulio_classe_3, &pedro_vida_3, &tulio_vida_3);
    bonus_arqueiro(pedro_classe_3, tulio_classe_3, &pedro_ataque_3, &tulio_ataque_3);
    bonus_mago(pedro_classe_3, tulio_classe_3, &pedro_vida_3, &tulio_vida_3, &pedro_ataque_3, &tulio_ataque_3);

    vencedor = duelo(pedro_classe_3, pedro_vida_3, pedro_ataque_3, tulio_classe_3, tulio_vida_3, tulio_ataque_3);
    if (vencedor == PEDRO_GANHOU)
    {
        pontos_pedro++;
        printf("Rodada3: Pedro\n");
    }
    else
    {
        pontos_tulio++;
        printf("Rodada3: Tulio\n");
    }

    if (pontos_pedro > pontos_tulio)
    {
        printf("Pedro vitorioso\n");
    }
    else
    {
        printf("Tulio vitorioso\n");
    }
    return 0;
}