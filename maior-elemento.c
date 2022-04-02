#include <stdio.h>

int maiorElemento(int vet[], int n)
{
    int maior;
    maior = vet[0];
    for (int i = 1; i < n; i++)
    {
        if (vet[i] > maior)
        {
            maior = vet[i];
        }
    }
    return maior;
}

int main()
{
    int n[50], i, maior;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &n[i]);
    }

    maior = maiorElemento(n, 10);

    printf("%d\n", maior);
}