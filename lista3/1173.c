#include <stdio.h>

void imprimir(int tamanho, long int vetor[]){
    int i;
    for(i = 0; i < tamanho; i++){
        printf("N[%d] = %ld\n", i, vetor[i]);
    }
}

void main(){
    long int x;
    scanf("%ld", &x);

    int tamanho = 10;
    long int n[tamanho];

    int i;
    for(i = 0; i < tamanho; i++){
        n[i] = x;
        x *= 2;
    }

    imprimir(tamanho, n);
}