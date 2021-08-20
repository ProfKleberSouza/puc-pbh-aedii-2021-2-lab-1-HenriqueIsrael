
void menor_maior(int vet[],int n, int *menor, int *maior){
    int i;

    *menor = vet[0];
    *maior = vet[0];

    for(i=0;i<n;i++){
        if(vet[i]>*maior){
            *maior = vet[i];
        }
        if(vet[i]<*menor){
            *menor = vet[i];
        }
    }
}
