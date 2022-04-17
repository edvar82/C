#include <stdio.h>

int identificar(int x, int y)
{
    if (x > 0 && y > 0)
    {
        return 1;
    }
    else if (x < 0 && y > 0)
    {
        return 2;
    }
    else if (x < 0 && x < 0)
    {
        return 3;
    }
    else
    {
        return 4;
    }
    return identificar(x, y);
}

void rodar()
{
    int x, y, quad;
    scanf("%d %d", &x, &y);

    if (x != 0 && y != 0)
    {
        quad = identificar(x, y);
        if (quad == 1)
        {
            printf("primeiro\n");
        }
        else if (quad == 2)
        {
            printf("segundo\n");
        }
        else if (quad == 3)
        {
            printf("terceiro\n");
        }
        else
        {
            printf("quarto\n");
        }
        rodar();
    }
}

int main()
{

    rodar();
    return 0;
}