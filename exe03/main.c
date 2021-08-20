#include <stdio.h>
#include "functions.h"
#define MAX 10

int main() {
  
  int vet[MAX], i, menor, maior, n;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&vet[i]);
  }

  menor_maior(vet, n, &menor, &maior);

  printf("MENOR = %d\n",menor);
  printf("MAIOR = %d\n",maior);
  
  return(0);
}