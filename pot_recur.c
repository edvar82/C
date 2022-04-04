#include <stdio.h>

int pot(int b, int p)
{
    if (p == 0)
    {
        return 1;
    }
    return (b * pot(b, p - 1));
}

int main()
{
    int n, p;
    scanf("%d %d", &n, &p);
    printf("%d\n", pot(n, p));
    return 0;
}