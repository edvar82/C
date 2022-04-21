#include <stdio.h>

int mdc(int a, int d)
{
    if (d == 0)
    {
        return a;
    }
    return mdc(d, a % d);
}

int main()
{
    int a, d, res;
    scanf("%d %d", &a, &d);

    res = mdc(a, d);

    printf("%d\n", res);
    printf("%d\n", 16 % 5);
}