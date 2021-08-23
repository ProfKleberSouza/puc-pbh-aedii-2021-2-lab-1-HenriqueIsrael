#include <stdio.h>
#include "functions.h"

int main() {

    int n1, n2, s;
  
  scanf("%d %d", &n1, &n2);

  s = potencia(n1,n2);

  printf("%d\n", s);

  return(0);
}