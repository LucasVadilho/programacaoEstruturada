#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int max(int n, int vetor[n]){
    if(n == 1) return vetor[n - 1];
    int maior = max(n - 1, vetor);
    return vetor[n - 1] > maior ? vetor[n - 1] : maior;
}

void main(){
    srand(time(NULL));
    
    int tamanho = 10;
    int v[tamanho];
    
    printf("V = {");
    int i;
    for(i = 0; i < tamanho; i ++){
        v[i] = rand() % 100;
        if(i == 0) printf("%d", v[i]);
        else printf(", %d", v[i]);
    }
    printf("}\n");
    
    printf("max(V) = %d\n", max(tamanho, v));
}