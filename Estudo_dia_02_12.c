#include <stdio.h>


int main ()
{
    int mat[100][100];
    int *p;
    int i, j, soma=0;

    p=&mat[0][0];

    for (i=0;i<100;i++)
    for(j=0;j<100;j++){
        *p=0;
        p++;
    }
    p=&mat[0][0];
    for(i=0;i<100;i++)
    for(j=0;j<100;j++){
        *p=soma;
        soma++;
        p++;
    }

}
