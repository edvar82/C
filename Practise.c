#include <stdio.h>

int main()
{
    int a, b, c;
    printf(": ");
    scanf("%d %d %d",&a, &b, &c);

    /*Definir a ordem*/

    if (a>c)
    {
        int apoiador=c;
        c=a;
        a=apoiador;
    }
    if(a>b)
    {
        int apoiador=b;
        b=a;
        a=apoiador;
    }
    if (b>c)
    {
        int apoiador=c;
        c=b;
        b=apoiador;
    }
    printf("\n\n%d\n%d\n%d",a, b, c);
}

