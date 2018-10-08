#include <stdio.h>

void prettyPrint(int n[], int tamanho){
    int i;
    for(i = 0; i < tamanho; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }
}

void main(){
    int t;
    scanf("%d", &t);

    int n[1000];
    int i;
    for(i = 0; i < 1000; i++){
        n[i] = i % t;
    }

    prettyPrint(n, 1000);
}