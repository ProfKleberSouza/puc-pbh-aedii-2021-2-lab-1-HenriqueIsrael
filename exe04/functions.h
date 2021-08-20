#include <string.h>
#include <stdio.h>

void numero_vogais(char string[]){
    int i, contA=0, contE=0, contI=0, contO=0, contU=0;
    for(i=0;i< strlen(string);i++){
        if(string[i]=='a')
            contA++;

        if(string[i]=='e')
            contE++;

        if(string[i]=='i')
            contI++;

        if(string[i]=='o')
            contO++;

        if(string[i]=='u')
            contU++;
    }
    printf("A = %d\n", contA);
    printf("E = %d\n", contE);
    printf("I = %d\n", contI);
    printf("O = %d\n", contO);
    printf("U = %d\n", contU);
}