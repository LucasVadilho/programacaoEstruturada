#include <stdio.h>

void imprimir(int tamanho, double vetor[]){
    int i;
    for(i = 0; i < tamanho; i++){
        printf("N[%d] = %.4lf\n", i, vetor[i]);
    }
}

void main(){
    double x;
    scanf("%lf", &x);

    int tamanho = 100;
    double n[tamanho];

    int i;
    for(i = 0; i < tamanho; i++){
        n[i] = x;
        x /= 2;
    }

    imprimir(tamanho, n);
}