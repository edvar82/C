#include <stdio.h>
 
int main(){
  int numero, inverso = 0, temp;        
  
  scanf("%d", &numero);    
  
  while(numero!=0){
    temp=numero%10;
    inverso=inverso*10+temp;
    numero=numero/10;
  }
  
  printf("O numero invertido eh %d", inverso);     
  return 0;
}