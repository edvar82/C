#include <stdio.h>

int main()
{
    int quant[7], i, total=0, xicaras;
    char str[7];
    for(i=0;i<7;i++){
        scanf(" %d",&quant[i]);
        scanf(" %c",&str[i]);
    }

    for(i=0;i<7;i++){
        if(str[i]=='p' || str[i]=='P'){
            total+=quant[i]*10;        }
    else if(str[i]=='g' || str[i]=='G'){
        total+=quant[i]*16;
    }
    }

    
    xicaras=(total*2)/7;
    
    printf("%d\n",total);
    printf("%d",xicaras);
    
    return 0;
}
