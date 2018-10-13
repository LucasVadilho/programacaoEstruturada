#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int busca(int x, int n, int vetor[n]){
    if(n == 1 && vetor[n - 1] != x) return -1;
    return vetor[n - 1] == x ? n - 1 : busca(x, n - 1, vetor);
}

void main(){
    srand(time(NULL));
    int n = rand() % 20;
    
    int tamanho = 10;
    int v[tamanho];
    
    printf("V = {");
    int i;
    for(i = 0; i < tamanho; i ++){
        v[i] = rand() % 20;
        if(i == 0) printf("%d", v[i]);
        else printf(", %d", v[i]);
    }
    printf("}\n");

    int indice = busca(n, tamanho, v);
    if(indice == -1) printf("O número %d não está em V, a função retornou %d\n", n, indice);
    else printf("O valor %d está na posição %d de V\n", n, indice);
}