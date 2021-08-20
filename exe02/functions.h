
int menor(int v[], int n){
    int i,menor;
    menor = v[0];
    for(i=0;i<n;i++)
        if(v[i]<menor)
            menor = v[i];
    return menor;
}