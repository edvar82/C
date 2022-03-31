#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float contador=0, num;
    int contador2=0;
    while (scanf(" %f",&num) == 1 && num != 999)
    {
        if(num>2){
            contador+=(num-2)*12.89;
            contador2+=1;
        }   
    }
    printf("%.2f\n",contador);
    printf("%d",contador2);
	return 0;
}