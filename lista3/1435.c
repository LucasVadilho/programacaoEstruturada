#include <stdio.h>
#include <math.h>

void imprimir(int m, int n, int matriz[m][n]){
    int i, j;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if(j == 0) printf("%3d", matriz[i][j]);
            else printf(" %3d", matriz[i][j]);
        }
        printf("\n");
    }
}

void fazOuter(int i, int ordem, int matriz[ordem][ordem]){
    int j;
    for(j = i; j < ordem - i; j++){
        matriz[i][j] = i + 1;
        matriz[ordem - i - 1][j] = i + 1;
    }

    for(j = i; j < ordem - i; j++){
        matriz[j][i] = i + 1;
        matriz[j][ordem - i - 1] = i + 1;
    }
}

void main(){
    int ordem;
    do{
        scanf("%d", &ordem);
        if(ordem != 0){
            int matriz[ordem][ordem];
            //int max  = ceil(ordem / 2) + 1;

            int i, j, inicio = 0, fim = ordem;
            for(i = 0; i < ordem; i++){
                fazOuter(i, ordem, matriz);
            }

            imprimir(ordem, ordem, matriz);
            printf("\n");
        }
    }while(ordem != 0);
}