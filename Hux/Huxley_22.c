#include <stdio.h>

void tabuada(int n, int limite)
{
    if (limite > 9)
    {
        return;
    }
    else
    {
        printf("%d X %d = %d\n", n, limite, n * limite);
    }
    return tabuada(n, limite + 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    tabuada(n, 1);
    return 0;
}