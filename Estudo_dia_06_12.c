#include <stdio.h>
int num;
int func(int a, int b)
{
a = (a+b)/2; /* Qual e o valor de a apos a atribuicao? */
num -= a;
return a;
}
main()
{
int first = 0, sec = 50;
num = 10;
num += func(first, sec); /* Qual e o valor de num, first e sec */
/* antes e depois da atribuicao? */
printf("\n\nConfira! num = %d\tfirst = %d\tsec = %d",num, first, sec);
}
