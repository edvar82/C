#include <stdio.h>

int imprimir(int a, int b)
{
    if(a<=b){
        printf("%d ",a);
        imprimir(a+1, b);
    }
}

void main(void)
{
    int num1, num2, i;
    num1=1;
    num2=10;
    printf("\n\nImprimindo com recursividade: ");
    imprimir(num1, num2);
    printf("\n\nImprimindo com iteratividade: ");
    for(i=num1;i<=num2;i++){
            printf("%d ", i);
    }
}
