#include <stdio.h>

int multiplos(int inicio, int valor)
{
    if (inicio % valor == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void multi(int multiplo, int inicio, int fim)
{
    int valor;
    if (inicio > fim)
    {
        return;
    }
    else if (multiplo > fim)
    {
        printf("INEXISTENTE\n");
    }
    else
    {
        valor = multiplos(inicio, multiplo);
        if (valor == 1)
        {
            printf("%d\n", inicio);
        }
        return multi(multiplo, inicio + 1, fim);
    }
}

int main()
{
    int multiplo, inicio, fim;
    scanf("%d %d %d", &multiplo, &inicio, &fim);

    multi(multiplo, inicio, fim);
    return 0;
}