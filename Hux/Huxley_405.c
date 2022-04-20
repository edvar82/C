#include <stdio.h>

int ehPar(int num, int cont)
{
    if (num == 0)
    {
        return cont;
    }
    else
    {
        int m = num % 10;
        if (m % 2 == 0)
        {
            cont++;
        }
        num /= 10;
    }
    return ehPar(num, cont);
}

int main()
{
    int num, pares;
    scanf("%d", &num);

    pares = ehPar(num, 0);

    printf("%d\n", pares);
    return 0;
}