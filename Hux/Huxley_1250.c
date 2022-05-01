#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define CLODES_GANHOU 1
#define BEZE_GANHOU 0

// Bezaliel vai usar o ataque de Dano == que se escolhido causa um dano D igual ao dano atual do pokemon no seu adversário.

// Clodes vai usar a outra habilidade == que se aumenta permanentemente o seu dano em 50 unidades.

// Clodes sempre ataca primeiro

// Bezaliel vai atacar até derrotar ou perder tentando, quando Clodes chega em um nível que não vai mais perder e começa a atacar.

int ganhador(int i, int A, int v2, int d1)
{
    if (i >= A)
    {
        return BEZE_GANHOU;
    }
    else if (v2 <= (A - i) * (d1 + 50 * i))
    {
        return CLODES_GANHOU;
    }
    else
    {
        return ganhador(i + 1, A, v2, d1);
    }
}

void rodar(int fim)
{
    if (fim > 0)
    {
        int v1, v2, d1, d2;
        scanf("%d %d %d %d", &v1, &v2, &d1, &d2);

        int A, vencedor;

        A = ceil((double)v1 / d2);

        vencedor = ganhador(0, A, v2, d1);

        if (vencedor == CLODES_GANHOU)
        {
            printf("Clodes\n");
        }
        else
        {
            printf("Bezaliel\n");
        }

        fim--;
        rodar(fim);
    }
}

int main()
{
    int vezes;
    scanf("%d", &vezes);
    rodar(vezes);
    return 0;
}