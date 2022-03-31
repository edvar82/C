#include <stdio.h>
#include <time.h>

void levetor(int *vet, int dimensao)
{
    int i;
    printf("Digite os %d valores a serem lidos: ", dimensao);
    for (i=0;i<dimensao;i++) scanf("%d", (vet+i));
}
void main ()
{
    int i;
    int vet[10];
    levetor(vet, 10);

    printf("Os numeros lidos foram: \n");
    for(i=0;i<10;i++) printf("%d ", vet[i]);
}
