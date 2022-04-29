
#include <stdio.h>

void rodar(int vezes, int i, int x, int y, int moedas, int reino)
{
    if (vezes == i)
    {
        printf("%d\n", moedas);
    }
    else
    {
        if (x > y)
        {
            reino = 2;
        }
        else if (x < y)
        {
            reino = 1;
        }
        char pontos;
        scanf(" %c", &pontos);

        if (x == y)
        {
            if (reino == 1)
            {
                if (pontos == 'D') // Foi para o reino 2
                {
                    moedas++;
                }
            }
            else if (reino == 2)
            {
                if (pontos == 'C') // Foi para o reino 1
                {
                    moedas++;
                }
            }
        }

        if (pontos == 'D')
        {
            x++;
        }
        else if (pontos == 'C')
        {
            y++;
        }

        rodar(vezes, i + 1, x, y, moedas, reino);
    }
}

int main()
{
    int vezes, i = 0;
    scanf("%d", &vezes);

    rodar(vezes, i, 0, 0, 0, 0);
    return 0;
}
