#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fat(int n)
{
    if (n)
    {
        return n * fat(n - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n;
    while (scanf("%d", &n) == 1 && n != -1)
    {
        printf("%d\n", fat(n));
    }
    return 0;
}