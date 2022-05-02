#include <stdio.h>

void rodar()
{
    int i, j, maior, menor, n, maiorc = 0, c;
    if (scanf("%d %d", &i, &j) == EOF)
    {
        return;
    }
    else
    {
        if (i >= j)
        {
            maior = i;
            menor = j;
        }
        else
        {
            maior = j;
            menor = i;
        }
        for (n = menor; n <= maior; n++)
        {
            int aux = n;
            for (c = 1; aux != 1; c++)
            {
                if (aux % 2 == 0)
                {
                    aux = aux / 2;
                }
                else
                {
                    aux = 3 * aux + 1;
                }
            }
            if (c > maiorc)
            {
                maiorc = c;
            }
        }
        printf("%d %d %d\n", i, j, maiorc);
        rodar();
    }
}

int main()
{
    rodar();
    return 0;
}