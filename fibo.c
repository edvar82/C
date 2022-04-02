#include <stdio.h>

int fibo(int num)
{
    int x;
    if (num == 1)
    {
        return 1;
    }
    if (num == 2)
    {
        return 1;
    }
    x = fibo(num - 1) + fibo(num - 2);

    return x;
}

int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", fibo(i));
    }

    return 0;
}