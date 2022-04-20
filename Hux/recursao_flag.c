#include <stdio.h>

int fat(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    return num * fat(num - 1);
}

void rodar()
{
    int num, fatorial;
    scanf("%d", &num);
    if (num != -1)
    {
        fatorial = fat(num);
        printf("%d\n", fatorial);
        rodar();
    }
}

int main()
{

    rodar();
    return 0;
}