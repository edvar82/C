#include <stdio.h>

int main()
{
    int i, j,vet[4][4];

    for(i=0;i<4;i++)
        for(i=0;i<4;i++){
        vet[i][j]=(i*4)+j+1;
        }

     for(i=0;i<4;i++){
        for(i=0;i<4;i++){
        printf("%d ",vet[i][j]);
        }
     }
    return 0;
}
