#include <stdio.h>

float sumHorizontal(int linha, int ordem, double matriz[ordem][ordem]){
    double sum = 0;

    int i, j;
    for(i = 0; i < ordem; i++){
        sum += matriz[linha][i];
    }

    return sum;
}

void main(){
    int tamanho = 12;
    
    int linha;
    char op;
    scanf("%d\n%c", &linha, &op);

    double matriz[tamanho][tamanho];
    int i, j;
    for(i = 0; i < tamanho; i++){
        for(j = 0; j < tamanho; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    if(op == 'S'){
        printf("%.1lf\n", sumHorizontal(linha, tamanho, matriz));
    } else{
        printf("%.1lf\n", sumHorizontal(linha, tamanho, matriz) / 12);
    }
}