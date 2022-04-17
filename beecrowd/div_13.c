#include <stdio.h>

int somar(int i, int fim, int sum)
{
    if (i == fim)
    {
        return sum;
    }
    if (i % 13 != 0)
    {
        sum += i;
    }
    return somar(i+1, fim, sum);
}

int main()
{
    int i, fim, res;

    scanf("%d %d", &i, &fim);

    res = somar(i, fim+1, 0);

    printf("%d\n", res);
}