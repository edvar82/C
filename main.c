#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	float notas[4]={1,4,6,8};
	printf("%.1f\n", notas[2]);
	notas[2]=7;
	printf("%.1f\n", notas[2]);
	//a linha abaixo refere-se ao array multidimensional.
	float boletim[2][4]={{1,3,5,9},{4,6,5,1}};
	printf("%.1f", boletim[1][3]);
	return 0;
}
