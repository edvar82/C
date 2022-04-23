#include <stdio.h>

void triangular(int num, int i, int prod)
{
    if (prod >= num)
    {
        i--;
        if (prod == num)
        {
            printf("%d * %d * %d = %d\n", i, i + 1, i + 2, num);
            printf("Verdadeiro\n");
        }
        else
        {
            printf("Falso\n");
        }
    }
    else
    {
        if (prod < num)
        {
            prod = i * (i + 1) * (i + 2);
            i++;
        }
        return triangular(num, i, prod);
    }
}

int main()
{
    int n;

    scanf("%d", &n);
    triangular(n, 1, 1);

    return 0;
}