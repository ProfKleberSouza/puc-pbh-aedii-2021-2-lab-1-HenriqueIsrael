#include <stdbool.h>

bool is_palindromo(char palavra[],int inicio, int final){
    if(final > inicio){
        if(palavra[final] == palavra[inicio]){
            final--;
            inicio++;
            is_palindromo(palavra, inicio, final);
            return true;
        }
        else
            return false;
    }
}