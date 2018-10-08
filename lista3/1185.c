#include <stdio.h>

float sumAcima(int n, int m, float matriz[n][m]){
    float sum = 0;

    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < m - 1 - i; j++){
            sum += matriz[i][j];
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
        printf("%.1f\n", sumAcima(t, t, matriz));
    } else{
        printf("%.1f\n", sumAcima(t, t, matriz) / 66);
    }
}