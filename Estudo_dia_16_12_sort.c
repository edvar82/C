#include <stdio.h>

int main()
{
    int n, i, menor, contador;
    printf("Digite a quantidade de numeros a serem ordenados em ordem crescente: ");
    scanf("%d",&n);
    system("cls");
    int vet[n];
    printf("\n\nDigite os numeros: ");
    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
    }


    printf("Numeros digitados: ");
    for(i=0;i<n;i++) printf("%4d",vet[i]);
    printf("\n");


    //Ordenando pelo bubblesort:

    for (contador=1;contador<n;contador++){
        for(i=0;i<n-1;i++){
            if(vet[i]<vet[i+1]){
                int aux=vet[i];
                vet[i]=vet[i+1];
                vet[i+1]=aux;
            }
        }
    }


    printf("\n\n\n\nNumeros em ordem decrescente: ");
    for(i=0;i<n;i++) printf("%4d",vet[i]);

}
