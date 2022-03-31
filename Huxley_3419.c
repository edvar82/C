#include <stdio.h>

int fibo(int n){
    int at=1, ant=0, prox, i;

    printf("%d\n%d\n",ant,at);
    for(i=0;i<n-2;i++){
        prox=ant+at;
        ant=at;
        at=prox;
        printf("%d\n",prox);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    
    fibo(n);
    return 0;
}