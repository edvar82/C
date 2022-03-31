#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float n1, n2 , n3, res;
    int cont=0;
    scanf(" %f %f %f",&n1,&n2,&n3);
    res=(n1+n2+n3)/3;
    if(n1>res){
        cont+=1;
    }
    if(n2>res){
        cont+=1;
    }
    if(n3>res){
        cont+=1;
    }
    printf("%d",cont);
	return 0;
}