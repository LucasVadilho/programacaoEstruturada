#include <stdio.h>

void main(){
    int vetor[20];

    int i;
    for(i = 0; i < 20; i++){
        scanf("%d", &vetor[i]);
    }

    int j;
    for(j = 0; j < 10; j++){
        int temp = vetor[j];
        vetor[j] = vetor[19 - j];
        vetor[19 - j] = temp;
    }

    int k;
    for(k = 0; k < 20; k++){
        printf("N[%d] = %d\n", k, vetor[k]);
    }
}