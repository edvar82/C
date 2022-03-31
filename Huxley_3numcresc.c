#include <stdio.h>

int main()
{  
    int n1, n2, n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n3){
        int aux=n3;
        n3=n1;
        n1=aux;
    }else if (n1>n2)
    {
        int aux=n2;
        n2=n1;
        n1=aux;
    }else if (n2>n3)
    {
        int aux=n2;
        n2=n3;
        n3=aux;
    }
    printf("%d\n%d\n%d",n1, n2, n3);   
    
    return 0;
}
