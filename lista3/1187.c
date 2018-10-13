#include <stdio.h>

double sumUp(int ordem, double matriz[ordem][ordem]){
    double sum = 0;

    int i, j;
    for(i = 0; i < ordem; i++){
        for(j = 0; j < ordem; j++){
            if(i < j && j < ordem - i - 1){
                sum += matriz[i][j];
            }
        }
    }

    return sum;
}

void main(){
    int tamanho = 12;
    char op;
    scanf("%s", &op);

    double matriz[tamanho][tamanho];
    int i, j;
    for(i = 0; i < tamanho; i++){
        for(j = 0; j < tamanho; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    if(op == 'S'){
        printf("%.1lf\n", sumUp(tamanho, matriz));
    } else{
        printf("%.1lf\n", sumUp(tamanho, matriz) / 30);
    }
}