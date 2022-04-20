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
    int n[6], i;
    int sum = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (n[i] % 3 == 0)
        {
            sum += fat(n[i]);
        }
    }

    printf("%d\n", sum);

    return 0;
}