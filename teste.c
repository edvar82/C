#include <stdio.h>

int soma(int n, int sum)
{
    int m;
    if (n <= 0)
    {
        return sum;
    }
    else
    {
        m = n % 10;
        sum += m;
        n /= 10;
    }
    return soma(n, sum);
}

int main()
{
    int num, res;
    scanf("%d", &num);

    res = soma(num, 0);

    printf("%d\n", res);
    return 0;
}