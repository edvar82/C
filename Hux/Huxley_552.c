#include <stdio.h>

int mdc(int a, int d)
{
    if (d == 0)
    {
        return a;
    }
    return mdc(d, a % d);
}

void rodar(int vezes)
{
    if (vezes > 0)
    {
        int a, d, res;
        scanf("%d %d", &a, &d);

        res = mdc(a, d);
        printf("MDC(%d,%d) = %d\n", a, d, res);
        vezes--;
        rodar(vezes);
    }
}

int main()
{
    int vezes;
    scanf("%d", &vezes);
    rodar(vezes);
    return 0;
}