#include <stdio.h>

void rodar(int vezes, int quant, int str, int total, int xicaras)
{

    if (vezes == 7)
    {
        xicaras = (total * 2) / 7;
        printf("%d\n%d\n", total, xicaras);
    }
    else
    {
        int quant;
        char str;
        scanf("%d %c", &quant, &str);

        if (str == 'p' || str == 'P')
        {
            total += quant * 10;
        }
        else
        {
            total += quant * 16;
        }
        return rodar(vezes + 1, quant, str, total, xicaras);
    }
}
int main()
{

    rodar(0, 0, 0, 0, 0);

    return 0;
}
