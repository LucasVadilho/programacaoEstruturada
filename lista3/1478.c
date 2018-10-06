#include <stdio.h>

void imprimir(int m, int n, int matriz[m][n]){
    int i, j;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void main(){
    int ordem;
    do{
        scanf("%d", &ordem);
        int matriz[ordem][ordem];

        int i, j, k;
        for(i = 0; i < ordem; i++){
            for(j = i; j < ordem; j++){
                matriz[i][j] = j - i + 1;    
            }

            for(k = i; k < ordem; k++){
                matriz[k][i] = k - i + 1;
            }
        }

        imprimir(ordem, ordem, matriz);
    }while(ordem != 0);
}