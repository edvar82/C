#include <stdio.h>

void levetor(int *vet, int dimensao)
{
    int i;
    printf("Digite os %d numeros:\n\n");
    for(i=0;i<dimensao;i++) scanf("%d", (vet+i));
}
void main(void)
{
    int i, vet[5];
    levetor(vet, 5);

    printf("Os numeros digitados foram: \n");
    for(i=0;i<5;i++) printf("%d ",vet[i]);
}
