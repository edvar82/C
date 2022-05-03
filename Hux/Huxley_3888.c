#include <stdio.h>
#include <math.h>
#define ARTHUR_GANHOU 0
#define PEDRO_GANHOU 1
#define TULIO_GANHOU 2
#define WILL_GANHOU 3
#define SEMWINNER 4
#define REGULARIDADE 5

int regularidade(double media, double numero_arthur, double numero_pedro, double numero_tulio, double numero_will)
{
    double fator, res=0;
    fator = sqrt(pow(numero_arthur - media, 2) + pow(numero_pedro - media, 2) + pow(numero_tulio - media, 2) + pow(numero_will - media, 2));
    if (fator <= 10)
    {
        res = REGULARIDADE;
    }
    return res;
}

int ganhador(double numero_arthur, double numero_pedro, double numero_tulio, double numero_will, double media)
{
    double A, P, T, W, winner;
    A = numero_arthur - media;
    P = numero_pedro - media;
    T = numero_tulio - media;
    W = numero_will - media;

    if (A < 0)
    {
        A /= -1;
    }
    if (P < 0)
    {
        P /= -1;
    }
    if (T < 0)
    {
        T /= -1;
    }
    if (W < 0)
    {
        W /= -1;
    }

    if ((A < P) && (A < T) && (A < W))
    {
        winner = ARTHUR_GANHOU;
    }
    else if ((P < A) && (P < T) && (P < W))
    {
        winner = PEDRO_GANHOU;
    }
    else if ((T < A) && (T < P) && (T < W))
    {
        winner = TULIO_GANHOU;
    }
    else if ((W < A) && (W < P) && (W < T))
    {
        winner = WILL_GANHOU;
    }
    else
    {
        winner = SEMWINNER;
    }
    return winner;
}

int main()
{
    double pontuacao_arthur, pontuacao_pedro, pontuacao_tulio, pontuacao_will, vencedor, pontos, fator;
    double numero_arthur, numero_pedro, numero_tulio, numero_will, media;
    char vencedor_passado;

    scanf("%lf %lf %lf %lf", &pontuacao_arthur, &pontuacao_pedro, &pontuacao_tulio, &pontuacao_will);
    scanf(" %lf %lf %lf %lf", &numero_arthur, &numero_pedro, &numero_tulio, &numero_will);
    scanf(" %c", &vencedor_passado);

    media = (numero_arthur + numero_pedro + numero_tulio + numero_will) / 4;
    fator = regularidade(media, numero_arthur, numero_pedro, numero_tulio, numero_will);

    vencedor = ganhador(numero_arthur, numero_pedro, numero_tulio, numero_will, media);

    if ((numero_arthur < 0 || numero_arthur >= 100) || (numero_pedro < 0 || numero_pedro >= 100) || (numero_tulio < 0 || numero_tulio >= 100) || (numero_will < 0 || numero_will >= 100))
    {
        printf("Números inválidos!\n");
        printf("Próxima rodada.\n");
    }
    else
    {
        if (vencedor == SEMWINNER)
        {
            printf("Não foi possível determinar um vencedor :/\n");
            printf("Próxima rodada.\n");
        }
        else
        {
            if (vencedor_passado == 'a')
            {
                if (vencedor == ARTHUR_GANHOU)
                {
                    if (pontuacao_arthur >= 0 && pontuacao_arthur <= 20)
                    {
                        pontos = 10 + (0.2 * pontuacao_arthur);
                    }
                    else if (pontuacao_arthur > 20 && pontuacao_arthur <= 40)
                    {
                        pontos = 10 + (0.4 * pontuacao_arthur);
                    }
                    else if (pontuacao_arthur > 40 && pontuacao_arthur <= 60)
                    {
                        pontos = 10 + (0.6 * pontuacao_arthur);
                    }
                    else if (pontuacao_arthur > 60 && pontuacao_arthur <= 80)
                    {
                        pontos = 10 + (0.8 * pontuacao_arthur);
                    }
                    else
                    {
                        pontos = 10 + (1 * pontuacao_arthur);
                    }
                    printf("Arthur venceu outra vez!\n");
                    printf("Pontuação: +%.2lf\n", pontos);
                }
                else
                {
                    if (vencedor == PEDRO_GANHOU)
                    {
                        printf("Pedro venceu!\n");
                        printf("Pontuação: +10\n");
                    }
                    else if (vencedor == TULIO_GANHOU)
                    {
                        printf("Túlio venceu!\n");
                        printf("Pontuação: +10\n");
                    }
                    else
                    {
                        printf("Will venceu!\n");
                        printf("Pontuação: +10\n");
                    }
                }
            }
            else if (vencedor_passado == 'p')
            {
                if (vencedor == PEDRO_GANHOU)
                {
                    if (pontuacao_pedro >= 0 && pontuacao_pedro <= 20)
                    {
                        pontos = 10 + (0.2 * pontuacao_pedro);
                    }
                    else if (pontuacao_pedro > 20 && pontuacao_pedro <= 40)
                    {
                        pontos = 10 + (0.4 * pontuacao_pedro);
                    }
                    else if (pontuacao_pedro > 40 && pontuacao_pedro <= 60)
                    {
                        pontos = 10 + (0.6 * pontuacao_pedro);
                    }
                    else if (pontuacao_pedro > 60 && pontuacao_pedro <= 80)
                    {
                        pontos = 10 + (0.8 * pontuacao_pedro);
                    }
                    else
                    {
                        pontos = 10 + (1 * pontuacao_pedro);
                    }
                    printf("Pedro venceu outra vez!\n");
                    printf("Pontuação: +%.2lf\n", pontos);
                }
                else
                {
                    if (vencedor == ARTHUR_GANHOU)
                    {
                        printf("Arthur venceu!\n");
                        printf("Pontuação: +10\n");
                    }
                    else if (vencedor == TULIO_GANHOU)
                    {
                        printf("Túlio venceu!\n");
                        printf("Pontuação: +10\n");
                    }
                    else
                    {
                        printf("Will venceu!\n");
                        printf("Pontuação: +10\n");
                    }
                }
            }
            else if (vencedor_passado == 't')
            {
                if (vencedor == TULIO_GANHOU)
                {
                    if (pontuacao_tulio >= 0 && pontuacao_tulio <= 20)
                    {
                        pontos = 10 + (0.2 * pontuacao_tulio);
                    }
                    else if (pontuacao_tulio > 20 && pontuacao_tulio <= 40)
                    {
                        pontos = 10 + (0.4 * pontuacao_tulio);
                    }
                    else if (pontuacao_tulio > 40 && pontuacao_tulio <= 60)
                    {
                        pontos = 10 + (0.6 * pontuacao_tulio);
                    }
                    else if (pontuacao_tulio > 60 && pontuacao_tulio <= 80)
                    {
                        pontos = 10 + (0.8 * pontuacao_tulio);
                    }
                    else
                    {
                        pontos = 10 + (1 * pontuacao_tulio);
                    }
                    printf("Tulio venceu outra vez!\n");
                    printf("Pontuação: +%.2lf\n", pontos);
                }
                else
                {
                    if (vencedor == ARTHUR_GANHOU)
                    {
                        printf("Arthur venceu!\n");
                        printf("Pontuação: +10\n");
                    }
                    else if (vencedor == PEDRO_GANHOU)
                    {
                        printf("Pedro venceu!\n");
                        printf("Pontuação: +10\n");
                    }
                    else
                    {
                        printf("Will venceu!\n");
                        printf("Pontuação: +10\n");
                    }
                }
            }
            else if (vencedor_passado == 'w')
            {
                if (vencedor == WILL_GANHOU)
                {
                    if (pontuacao_will >= 0 && pontuacao_will <= 20)
                    {
                        pontos = 10 + (0.2 * pontuacao_will);
                    }
                    else if (pontuacao_will > 20 && pontuacao_will <= 40)
                    {
                        pontos = 10 + (0.4 * pontuacao_will);
                    }
                    else if (pontuacao_will > 40 && pontuacao_will <= 60)
                    {
                        pontos = 10 + (0.6 * pontuacao_will);
                    }
                    else if (pontuacao_will > 60 && pontuacao_will <= 80)
                    {
                        pontos = 10 + (0.8 * pontuacao_will);
                    }
                    else
                    {
                        pontos = 10 + (1 * pontuacao_will);
                    }
                    printf("Will venceu outra vez!\n");
                    printf("Pontuação: +%.2lf\n", pontos);
                }
                else
                {
                    if (vencedor == ARTHUR_GANHOU)
                    {
                        printf("Arthur venceu!\n");
                        printf("Pontuação: +10\n");
                    }
                    else if (vencedor == PEDRO_GANHOU)
                    {
                        printf("Pedro venceu!\n");
                        printf("Pontuação: +10\n");
                    }
                    else
                    {
                        printf("Tulio venceu!\n");
                        printf("Pontuação: +10\n");
                    }
                }
            }
            else
            {
                if (vencedor == ARTHUR_GANHOU)
                {
                    printf("Arthur venceu!\n");
                    printf("Pontuação: +10\n");
                }
                else if (vencedor == PEDRO_GANHOU)
                {
                    printf("Pedro venceu!\n");
                    printf("Pontuação: +10\n");
                }
                else if (vencedor == TULIO_GANHOU)
                {
                    printf("Tulio venceu!\n");
                    printf("Pontuação: +10\n");
                }
                else
                {
                    printf("Will venceu!\n");
                    printf("Pontuação: +10\n");
                }
            }
            if (fator == REGULARIDADE)
            {
                printf("Houve regularidade na rodada!\n");
                printf("Todos ganharam +10 pontos\n");
            }
        }
    }
}
