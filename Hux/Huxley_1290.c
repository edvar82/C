#include <stdio.h>

int serie(int inicial, int limite, int i)
{
    if (limite == i)
    {
        printf("%d\n", inicial);
    }

    else
    {
        i++;

        int soma = inicial + 3;

        if (i == limite)
        {
            printf("%d\n", soma);
        }

        else
        {
            i++;

            int resto5 = (soma % 5) + soma;

            if (i == resto5)
            {
                printf("%d\n", resto5);
            }
            else
            {
                return serie(resto5, limite, i);
            }
        }
    }
}

int main()
{
    int inicio, fim;
    scanf("%d %d", &inicio, &fim);

    serie(inicio, fim, 0);

    return 0;
}