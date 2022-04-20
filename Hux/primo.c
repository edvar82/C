#include <stdio.h>

int ehprimo(int num, int i)
{
    if (num == 1)
    {
        return 0;
    }
    if (num == i)
    {
        return 1;
    }
    if (num % i == 0)
    {
        return 0;
    }
    i++;
    return ehprimo(num, i);
}

void rodar()
{
    int num, res;
    scanf("%d", &num);
    if (num != -1)
    {
        res = ehprimo(num, 2);
        printf("%d\n", res);
        rodar();
    }
}

int main()
{
    rodar();
    return 0;
}