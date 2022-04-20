#include <stdio.h>

int main()
{
    float ph;
    scanf("%f",&ph);

    if(ph<7){
        printf("Acida");
    }
    else if(ph==7){
        printf("Neutra");
    }
    else if(ph>7){
        printf("Basica");
    }
    return 0;
}
