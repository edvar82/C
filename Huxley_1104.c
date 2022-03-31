#include <stdio.h>

int main() {
  int vet1[10],vet2[10],res[10],i;

  for(i=0;i<10;i++){
    scanf(" %d",&vet1[i]);
  }
  for(i=0;i<10;i++){
    scanf(" %d",&vet2[i]);
  }
  
  for(i=0;i<10;i++){
    res[i]=vet1[i]+vet2[i];
  }

  for(i=0;i<10;i++){
    printf("%d ",res[i]);
  }
  
  return 0;
}
