#include <stdio.h>

void main(){
    int n;
    scanf("%d", &n);

    int x[n];
    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &x[i]);
    }

    int iMaior = 0, iMenor = 0;
    for(i = 1; i < n; i++){
        iMaior = (x[i] > x[iMaior]) ? i : iMaior;
        iMenor = (x[i] < x[iMenor]) ? i : iMenor;
    }

    printf("Menor valor: %d\n", x[iMenor]);
    printf("Posicao: %d\n", iMenor);
}