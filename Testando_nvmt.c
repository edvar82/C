#include <stdio.h>

void bubble_sort (int vet[], int n)
{
    int i, cont;
    for(cont=1;cont<n;cont++){
        for(i=0;i<n-1;i++){
            if(vet[i]>vet[i+1]){
                int aux=vet[i];
                vet[i]=vet[i+1];
                vet[i+1]=aux;
            }
        }
    }
}
int main()
{
    int cont, i, vetor[5];
    printf("\nDigite os numeros que serao ordenados: ");
    for(i=0;i<5;i++){
        scanf("%d", &vetor[i]);
    }
    bubble_sort(vetor, 5);

    for(i=0;i<5;i++) printf("%4d",vetor[i]);

}
