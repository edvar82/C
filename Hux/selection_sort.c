#include <stdio.h>

void selecao_sort(int vet[], int n){
    int i, j, menor;
    for(i=0;i<n-1;i++){
        menor=i;
        for(j=0;j<n;j++){
            if(vet[j]<vet[menor]){
                menor=j;
            }
            if(i!=menor){
                int aux=vet[i];
                vet[i]=vet[menor];
                vet[menor]=aux;
            }
        }
    }
}

void bubble_sort(int vet[], int n){
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
    int vet[5], i;
    printf("Digite os numeros: ");
    for(i=0;i<5;i++){
        scanf("%d",&vet[i]);
    }

    selecao_sort(vet,5);

    for(i=0;i<5;i++) {
            printf("%4d",vet[i]);
    }
    return 0;
}
