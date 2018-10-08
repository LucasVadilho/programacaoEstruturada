#include <stdio.h>

float sumDireita(int n, int m, float matriz[n][m]){
    float sum = 0;

    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(j > i && j > m - 1 - i){
                sum += matriz[i][j];
            }
        }
    }

    return sum;
}

void main(){
    int t = 12;
    char op;
    scanf("%s", &op);

    float matriz[t][t];
    int i, j;
    for(i = 0; i < t; i++){
        for(j = 0; j < t; j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    if(op == 'S'){
        printf("%.1f\n", sumDireita(t, t, matriz));
    } else{
        printf("%.1f\n", sumDireita(t, t, matriz) / 30);
    }
}