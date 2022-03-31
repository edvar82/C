#include <stdio.h>
#define MAX 5

void levetor(int *vet, int dimensao)
{
    int i;
    printf("Digite os %d numeros para serem lidos: \n\n", dimensao);
    for (i = 0; i < dimensao; i++)
        scanf("%d", (vet + i));
}

void main()
{
    int i;
    int vet[MAX];
    levetor(vet, MAX);

    printf("Os valores digitados e lidos foram: \n");
    for (i = 0; i < MAX; i++)
        printf("%d \t", vet[i]);
}
