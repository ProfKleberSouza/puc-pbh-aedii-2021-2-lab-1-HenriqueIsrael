#include <string.h>
#include <stdio.h>

void inverte(char texto[]){
    int i=0;
    char aux;
    int tamanho = strlen(texto) -1;

    while(i<tamanho){
        aux = texto[i];
        texto[i] = texto[tamanho];
        texto[tamanho] = aux;
        i++;
        tamanho--;
    }
    printf("%s", texto);
}