#include <stdio.h>
#include "functions.h"

int main() {

    int a, b, s;
    char placar[200];
  
  // ENTRADA DE DADOS
  scanf("%d %d", &a, &b);

  criar_placar(a,b,placar);

  for(s=0;s<b;s++){
    possivel_placar(a,b,placar,s);
  }

  if(a>1 && b>1){
    falta_placar(a,b,placar);
  }

  return(0);
}