int main()
{
int y, *p, x;
y = 0;
p = &y; //aponta o ponteiro (p) para a vari�vel y, ou seja, *p ser� 0. y<-0.
x = *p; //declara x como 0, indiretamente.
x = 4; //altera o valor de x para 4. x<-4.
(*p)++; //incrementa o conte�da da variavel apontada pelo ponteiro. y<-1.
x--; //retira um conte�do da vari�vel de x. x<-3.
(*p) += x; //y<-y(1)+x(3).
printf ("y = %d\n", y); //y=4.
return(0);
}
