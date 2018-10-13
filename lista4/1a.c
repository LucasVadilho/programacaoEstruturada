#include <stdio.h>

int soma(int n, int vetor[n]){
    if(n == 1) return vetor[n - 1];
    return vetor[n - 1] + soma(n - 1, vetor);
}

void main(){
    int tamanho = 100;
    int v[tamanho];
    
    int i;
    for(i = 0; i < tamanho; i ++){
        v[i] = i + 1;
    }
    
    printf("%d\n", soma(tamanho, v));
}