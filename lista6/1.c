#include <stdio.h>
#include <stdlib.h>

#define NUM_CELULAS 100

typedef struct{
    int codigo;
    char descricao[20];
    float quantidade;
} celula;

int check(int *v, int num){
    int i;
    for(i = 0; i < NUM_CELULAS; i++){
        if(v[i] == num) return 0;
    }
    return 1;
}

void imprimirGalpao(celula *galpao){
    int *codigosPrintados = (int *) calloc(NUM_CELULAS, sizeof(int));
    
    printf("Id\tDesc\tQtd\n");
    int i, j;
    for(i = 0; i < NUM_CELULAS; i++){
        int print = check(codigosPrintados, galpao[i].codigo);

        if(print){
            float qtd = galpao[i].quantidade;
            for(j = i + 1; j < NUM_CELULAS;j++){
                if(galpao[i].codigo == galpao[j].codigo){
                    qtd += galpao[j].quantidade;
                }
            }
            codigosPrintados[i] = galpao[i].codigo;
            printf("%d\t%s\t%f\n", galpao[i].codigo, galpao[i].descricao, qtd);
        }
    }
}

void main(){
    celula *galpao = (celula *) malloc(NUM_CELULAS * sizeof(celula));
    int i;
    for(i = 0; i < NUM_CELULAS; i++){
        scanf("%d", &galpao[i].codigo);
        scanf("%s", galpao[i].descricao);
        scanf("%f", &galpao[i].quantidade);
    }

    imprimirGalpao(galpao);

    free(galpao);
}