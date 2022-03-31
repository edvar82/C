#include <stdio.h>

int imprimir(int inicio, int fim)
{
    if(inicio<fim){
        printf("%d ", inicio);
        imprimir(inicio+1, fim);
    }
}

int main()
{
    int i, num1, num2;
    num1=1;
    num2=10;
    printf("\nImprimindo com recursividade: \n");
    printf("%d ",imprimir(num1,num2));

    printf("\n\nImprimindo com Iteratividade: \n");
    for(i=num1;i<=num2;i++){
    printf("%d ", i);
    }
    return 0;
}
