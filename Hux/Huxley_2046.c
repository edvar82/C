#include <stdio.h>

int fatorial(int i, int termos, int fat)
{
    if (i <= termos)
    {
        if (i == 1)
        {
            fat = i;
        }
        else
        {
            fat *= i;
        }
        return fatorial(i + 1, termos, fat);
    }
    else
    {   
        return fat;
    }
}
int eh_primo(int numero)
{
    int rest2 = numero % 2;
    int rest3 = numero % 3;
    if (numero == 2 || numero == 3)
    {
        return numero;
    }
    else if (rest2 != 0 && rest3 != 0)
    {
        return numero;
    }
    else if (rest2 == 0 || rest3 == 0)
    {
        numero++;
    }
    return eh_primo(numero);
}

void serie(int i, int termos, double soma)
{
    double primo = eh_primo(i);
    if (i > termos)
    {
        printf("\n%.2lf\n", soma);
        return;
    }
    else
    {
        soma += fatorial(1, i, 1) / primo;
        if (i != 1)
        {
            printf(" + ");
        }
        printf("%d!/%0.lf", i, primo);
    }
    return serie(i + 1, termos, soma);
}

int main()
{
    int termos;
    scanf("%d", &termos);

    serie(1, termos, 0);
    return 0;
}