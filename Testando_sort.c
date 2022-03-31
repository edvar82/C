#include <stdio.h>

void selection_sort(int vet[], int n)
{
    int i, j, menor;
    for(i=0;i<n-1;i++){
        menor=i;
        for(j=i+1;j<n;j++){
            if(vet[j]>vet[menor])
            menor=j;
        }
        if(i!=menor){
            int aux=vet[i];
            vet[i]=vet[menor];
            vet[menor]=aux;
        }
    }
}



int main(int argc, char const *argv[])
{
    int vet[1], i;
    printf("\nDigite os numeros que serao ordenados: \n");
    for(i=0;i<5;i++){
        scanf("%d",&vet[i]);
    }

    selection_sort(vet,1);

    for(i=0;i<1;i++) printf("%4d",vet[i]);   

    return 0;
}
