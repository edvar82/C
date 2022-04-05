#include <stdio.h>

int fat(int num)
{
    if (num == 0)
    {
        return 1;
    }
    return num * fat(num - 1);
}

int main()
{
    int n;

    while ((scanf("%d", &n) == 1 && n != -1))
    {
        printf("%d\n", fat(n));
    }
    return 0;
}