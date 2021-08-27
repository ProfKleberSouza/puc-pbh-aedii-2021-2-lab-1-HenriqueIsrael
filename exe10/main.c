#include <stdio.h>
#include "functions.h"
#define MAX 500

int main() {

    int n;
    int v[MAX]; 

  // ENTRADA DE DADOS
  scanf("%d",&n);

  if(n==0)
    printf("0");
  
  else
    binario(0,v,n);

  return(0);
}