#include <stdio.h>

int main(){
    int m[4][4], l, c;
    for(l=0;l<4;l++)
        for(c=0;c<4;c++){
            m[l][c]=(l*4)+c+1;
        }

    for(l=0;l<4;l++){
        for(c=0;c<4;c++)
        printf("%3d ",m[l][c]);
        printf("\n");
    }
    return 0;
}
