#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int soma(int n){
    if(n == 1) return 1;
    return n + soma(n - 1);
}

void main(){
    srand(time(NULL));
    
    int n = rand() % 1000;
    printf("A soma dos primeiros %d números inteiros positivos é %d.\n", n, soma(n));
}