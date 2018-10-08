#include <stdio.h>

float sumColuna(int n, int m, float matriz[n][m], int coluna){
    float sum = 0;

    int i;
    for(i = 0; i < n; i++){
        sum += matriz[i][coluna];
    }

    return sum;
}

void main(){
    int t = 12;

    int coluna;
    scanf("%d\n", &coluna);

    char op;
    scanf("%c", &op);

    float matriz[t][t];
    int i, j;
    for(i = 0; i < t; i++){
        for(j = 0; j < t; j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    float soma = sumColuna(t, t, matriz, coluna);

    if(op == 'S'){
        printf("%.1f\n", soma);
    } else{
        printf("%.1f\n", sumColuna(t, t, matriz, coluna) / t);
    }
}