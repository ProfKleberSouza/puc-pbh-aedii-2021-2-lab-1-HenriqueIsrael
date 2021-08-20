#include <stdio.h>
#include "functions.h"
#define MAX 100

int main() {

  int v[MAX], n, i, menorNumero;
  
  scanf("%d", &n);

  for(i=0;i<n;i++)
    scanf("%d",&v[i]);

  menorNumero = menor(v,n);

  printf("MENOR = %d\n", menorNumero);

  return(0);
}