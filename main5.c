#include <stdio.h>
#include <stdlib.h>


int main() {
	char str[10]="Joao";
	printf("Essa eh a string: %s\n", str);
	printf("Segunda letra: %c\n", str[1]);
	str[1]='u';
	printf("Agora essa eh a string: %s\n", str);
	printf("Essa eh a segunda letra: %c\n", str[1]);
	return(0);
}
