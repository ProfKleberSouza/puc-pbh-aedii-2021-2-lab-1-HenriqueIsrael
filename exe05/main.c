#include <stdio.h>
#include <string.h>
#include "functions.h"

int main() {

    char texto[50];
  
  //Entrada de dados
  fgets(texto,50,stdin);

  //Chama o procedimento inverte
  inverte(texto);
  
  return(0);
}