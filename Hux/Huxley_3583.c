#include <stdio.h>
#define f3 1
#define f2 2
#define f1 3
#define b3 4
#define b2 5
#define b1 6
#define p3 7
#define p2 8
#define p1 9
#define o3 10
#define o2 11
#define o1 12

void patente(char ranque_nosbor, char ranque_felipe, int nivel_nosbor, int nivel_felipe)
{
    int patente_nosbor, patente_felipe, res;
    if (ranque_nosbor == 'F' && nivel_nosbor == 3)
    {
        patente_nosbor = f3;
    }
    else if (ranque_nosbor == 'F' && nivel_nosbor == 2)
    {
        patente_nosbor = f2;
    }
    else if (ranque_nosbor == 'F' && nivel_nosbor == 1)
    {
        patente_nosbor = f1;
    }
    else if (ranque_nosbor == 'B' && nivel_nosbor == 3)
    {
        patente_nosbor = b3;
    }
    else if (ranque_nosbor == 'B' && nivel_nosbor == 2)
    {
        patente_nosbor = b2;
    }
    else if (ranque_nosbor == 'B' && nivel_nosbor == 1)
    {
        patente_nosbor = b1;
    }
    else if (ranque_nosbor == 'P' && nivel_nosbor == 3)
    {
        patente_nosbor = p3;
    }
    else if (ranque_nosbor == 'P' && nivel_nosbor == 2)
    {
        patente_nosbor = p2;
    }
    else if (ranque_nosbor == 'P' && nivel_nosbor == 1)
    {
        patente_nosbor = p1;
    }
    else if (ranque_nosbor == 'O' && nivel_nosbor == 3)
    {
        patente_nosbor = o3;
    }
    else if (ranque_nosbor == 'O' && nivel_nosbor == 2)
    {
        patente_nosbor = o2;
    }
    else if (ranque_nosbor == 'O' && nivel_nosbor == 1)
    {
        patente_nosbor = o1;
    }

    if (ranque_felipe == 'F' && nivel_felipe == 3)
    {
        patente_felipe = f3;
    }
    else if (ranque_felipe == 'F' && nivel_felipe == 2)
    {
        patente_felipe = f2;
    }
    else if (ranque_felipe == 'F' && nivel_felipe == 1)
    {
        patente_felipe = f1;
    }
    else if (ranque_felipe == 'B' && nivel_felipe == 3)
    {
        patente_felipe = b3;
    }
    else if (ranque_felipe == 'B' && nivel_felipe == 2)
    {
        patente_felipe = b2;
    }
    else if (ranque_felipe == 'B' && nivel_felipe == 1)
    {
        patente_felipe = b1;
    }
    else if (ranque_felipe == 'P' && nivel_felipe == 3)
    {
        patente_felipe = p3;
    }
    else if (ranque_felipe == 'P' && nivel_felipe == 2)
    {
        patente_felipe = p2;
    }
    else if (ranque_felipe == 'P' && nivel_felipe == 1)
    {
        patente_felipe = p1;
    }
    else if (ranque_felipe == 'O' && nivel_felipe == 3)
    {
        patente_felipe = o3;
    }
    else if (ranque_felipe == 'O' && nivel_felipe == 2)
    {
        patente_felipe = o2;
    }
    else if (ranque_felipe == 'O' && nivel_felipe == 1)
    {
        patente_felipe = o1;
    }

    if (patente_nosbor > patente_felipe)
    {
        res = patente_nosbor - patente_felipe;
        if (res <= 3)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
        res = patente_felipe - patente_nosbor;
        if (res <= 3)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}

int main()
{
    char ranque_nosbor, ranque_felipe;
    int nivel_nosbor, nivel_felipe;

    scanf("%c\n%c\n%d\n%d", &ranque_nosbor, &ranque_felipe, &nivel_nosbor, &nivel_felipe);

    patente(ranque_nosbor, ranque_felipe, nivel_nosbor, nivel_felipe);
    return 0;
}