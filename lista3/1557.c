#include <stdio.h>
#include <math.h>

void imprimir(int m, int n, int matriz[m][n]){
    int qtdMax = (m + n - 2) * log10(2) + 1;
    int i, j;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if(j == 0) printf("%*d", qtdMax, matriz[i][j]);
            else printf(" %*d", qtdMax, matriz[i][j]);
        }
        printf("\n");
    }
}

void main(){
    int ordem;
    do{
        scanf("%d", &ordem);
        if(ordem == 0) break;

        int matriz[ordem][ordem];
        int i, j;
        for(i = 0; i < ordem; i++){
            for(j = 0; j < ordem; j++){
                matriz[i][j] = pow(2, i + j);
            }
        }
        imprimir(ordem, ordem, matriz);
        printf("\n");
    }while(ordem != 0);
}