#include <stdio.h>

int main()
{
    int i, j,vet[4][4];

    for(i=0;i<4;i++)
        for(j=0;j<4;j++){
        vet[i][j]=(i*4)+j+1;
        }

     for(i=0;i<4;i++){
        for(j=0;j<4;j++)
        printf("%4d ",vet[i][j]);
        printf("\n");
     }
    return 0;
}