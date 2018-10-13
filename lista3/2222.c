#include <stdio.h>

void zeros(int tamanho, int v[]){
    int i;
    for(i = 0; i < tamanho; i++){
        v[i] = 0;
    }
}

int contaElem(int tamanho, int v[]){
    int count = 0;
    int i;
    for(i = 0; i < tamanho; i++){
        if(v[i] != 0) count++;
    }
    return count;
}

int verifica(int x, int tamanho, int v[]){
    int i;
    for(i = 0; i < tamanho; i++){
        if(v[i] == x) return 1;
    }
    return 0;
}

void imprime(int n, int v[]){
    int i;
    for(i = 0; i < n; i++){
        printf("%3d ", v[i]);
    }
    printf("\n");
}

int interseccao(int c1, int c2, int conjuntos[][60]){
    int u = 0, interseccao[60];
    zeros(60, interseccao);

    int i;
    for(i = 0; i < 60; i++){
        if(conjuntos[c1][i] == 0) break;
        else if(verifica(conjuntos[c1][i], 60, interseccao) == 0 && verifica(conjuntos[c1][i], 60, conjuntos[c2])){
            interseccao[u] = conjuntos[c1][i];
            u++;
        }
    }
    
    return contaElem(60, interseccao);
}

int uniao(int c1, int c2, int conjuntos[][60]){
    int u = 0, uniao[120];
    zeros(120, uniao);

    int i;
    for(i = 0; i < 60; i++){
        if(conjuntos[c1][i] != 0 && verifica(conjuntos[c1][i], 120, uniao) == 0){
            uniao[u] = conjuntos[c1][i];
            u++;
        }
        
        if(conjuntos[c2][i] != 0 && verifica(conjuntos[c2][i], 120, uniao) == 0){
            uniao[u] = conjuntos[c2][i];
            u++;
        }
    }

    return contaElem(120, uniao);
}

void main(){
    int t;
    scanf("%d", &t);

    int i;
    for(i = 0; i < t; i++){
        int n;
        scanf("%d", &n);

        int conjuntos[n][60];

        int j;
        for(j = 0; j < n; j++){
            zeros(60, conjuntos[j]);

            int mi;
            scanf("%d", &mi);

            int k;
            for(k = 0; k < mi; k++){
                scanf("%d", &conjuntos[j][k]);
            }
        }

        int q;
        scanf("%d", &q);

        for(j = 0; j < q; j++){
            int op, c1, c2;
            scanf("%d", &op);
            scanf("%d", &c1);
            scanf("%d", &c2);

            if(op == 1) printf("%d\n", interseccao(c1 - 1, c2 - 1, conjuntos));
            else printf("%d\n", uniao(c1 - 1, c2 - 1, conjuntos));
        }        
    }
}