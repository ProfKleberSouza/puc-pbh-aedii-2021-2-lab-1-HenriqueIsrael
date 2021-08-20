#include <stdio.h>
#include "functions.h"

int main() {

    char string[100];
  
  fgets(string,100,stdin);

  numero_vogais(string);

  return(0);
}