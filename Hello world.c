#include <stdio.h>

int main(){
    float num1, num2, resultado;
    printf("Escreva o primeiro numero: ");
    scanf("%f", &num1);
    printf("\nEscreva o segundo numero: ");
    scanf("%f", &num2);
    resultado=num1+num2;
    printf("\nO resultado da soma eh: %f", resultado);
    return 0;
}
