#include <stdio.h>
#include "functions.h"

int main() {

  int n1,n2,result;

  scanf("%d %d",&n1,&n2);

  result = mdc(n1,n2);

  printf("MDC = %d",result);
  return(0);
}