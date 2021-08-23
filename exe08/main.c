#include <stdio.h>
#include "functions.h"
#include <stdbool.h>

int main() {

  int palavra[100],final;
  
  fgets(palavra,sizeof(palavra),stdin);

  final = strlen(palavra) - 2;

  if(is_palindromo(palavra,0,final) == false)
    printf("NAO");

  if(is_palindromo(palavra,0,final)== true)
    printf("SIM");
    
  return(0);
}