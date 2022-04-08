#include <stdio.h>

void fibo(int first, int length, int pen, int last)
{
    if (first > length)
    {
        return;
    }
    else if (first == length)
    {
        printf("%d\n", pen + last);
    }
    else
    {
        printf("%d ", pen + last);
    }
    fibo(first + 1, length, last, pen + last);
}

int main()
{   
    int num;

    while (scanf("%d", &num) == 1 && num != 0)
    {
        if (num == 1)
        {
            printf("0\n");
        }
        else if (num == 2)
        {
            printf("0 1\n");
        }
        else
        {
            printf("0 1 ");
            fibo(3, num, 0, 1);
        }
    }
    return 0;
}