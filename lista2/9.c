#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimeAleatorios(int n, int max);

void main(){
    srand(time(NULL));

    int i;
    for(i = 0; i < 9; i++){
        imprimeAleatorios(i + 1, 10 * (i + 1));
        printf("\n");
    }
}

void imprimeAleatorios(int n, int max){
    int i;
    for(i = 0; i < n; i++){
        int r = rand();
        printf("%d\t", r % max);
    }
}