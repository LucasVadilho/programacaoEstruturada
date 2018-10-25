#include <stdio.h>
#include <stdlib.h>

void main(){
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);

    int **matriz = malloc(m * sizeof(int));
    int i, j;
 
    for(i = 0; i < n; i++){
        matriz[i] = malloc(n * sizeof(int));
    }

    for(i = 0; i < m; i ++){
        for(j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < m; i ++){
        for(j = 0; j < n; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    for(i = 0; i < n; i++){
        free(matriz[i]);
    }

    free(matriz);
}