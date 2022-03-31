#include <stdio.h>

double tr_retangulo(double a, double c)
{
    double resultado;
    resultado=(a*c)/2;
    return resultado;
}

double circulo(double c)
{
    double resultado, pi=3.14159;
    resultado=pi*(c*c);
    return resultado;
}

double trapezio(double a, double b, double c)
{
    double resultado;
    resultado=((a+b)*c)/2 ;
    return resultado;
}

double quadrado(double b)
{
    double resultado;
    resultado=b*b;
    return resultado;
}

double retangulo(double a, double b)
{
    double resultado;
    resultado=a*b;
    return resultado;
}

int main()
{
    double A, B, C;
    
    scanf("%lf %lf %lf",&A, &B, &C);
    
    

    printf("TRIANGULO: %.3f\n",tr_retangulo(A,C));
    printf("CIRCULO: %.3f\n",circulo(C));
    printf("TRAPEZIO: %.3f\n",trapezio(A,B,C));
    printf("QUADRADO: %.3f\n",quadrado(B));
    printf("RETANGULO: %.3f",retangulo(A,B));


    return 0;
}
