#include <stdio.h>

void imprimir(int n, int matriz[n][n]){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void zeros(int n, int matriz[n][n]){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            matriz[i][j] = 0;
        }
    }
}

void main(){
    int n;
    while(scanf("%d", &n) != EOF){
        int matriz[n][n];
        zeros(n, matriz);

        int i, j;
        for(i = 0; i < n; i++){
            matriz[i][i] = 2;
            matriz[i][n - i - 1] = 3;
            if(i >= n / 3 && i < n - n/3){
                int j;
                for(j = n/3; j < n - n/3; j++){
                    matriz[i][j] = 1;
                }
            }
            if(i == n/2) matriz[i][i] = 4;
        }
        imprimir(n, matriz);
    }
}