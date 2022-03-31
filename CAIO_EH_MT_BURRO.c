#include <stdio.h>

int main(){
    int l, c, m[4][4];
    for (l=0;l<4;l++)
        for (c=0;c<4;c++){
            printf("\nDigite o numero na formacao[%d][%d] = ", l, c);
            scanf("%d",&m[l][c]);
        }
    system("cls");
    for (l=0;l<4;l++){
        for (c=0;c<4;c++)
            printf("%5d ",m[l][c]);
            printf("\n");
    }
    return 0;
}
