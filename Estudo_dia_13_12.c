#include <stdio.h>


int main()
{
    int matrx[4][4];
    int l, c;
    for(l=0;l<4;l++)
        for(c=0;c<4;c++){
            matrx[l][c]=(l*4)+c+1;
        }

    for(l=0;l<4;l++){
        for(c=0;c<4;c++)
            printf("%3d ", matrx[l][c]);
            printf("\n");
    }
}
