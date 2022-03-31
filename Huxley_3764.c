#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i;
    float vet;
    while(1){
        scanf("%f",&vet);
        if(vet==-1){
            break;
        }else if(vet<7){
            printf("ACIDA\n");
        }else if(vet==7){
            printf("NEUTRA\n");
        }else if(vet>7){
            printf("BASICA\n");
        }
    }
	return 0;
}