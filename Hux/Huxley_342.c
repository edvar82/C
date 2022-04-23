#include <stdio.h>

int div_3(int valores, int num, int cont)
{
    if (num == 0)
    {
        return cont;
    }
    else
    {
        if (valores % num == 0)
        {
            if (num % 3 == 0)
            {
                cont++;
            }
        }
        num--;
    }
    return div_3(valores, num, cont);
}

int main()
{
    int num, valores;
    scanf("%d", &num);

    valores = div_3(num, num, 0);
    if (valores == 0)
    {
        printf("O numero nao possui divisores multiplos de 3!");
    }
    else
    {
        printf("%d\n", valores);
    }
}