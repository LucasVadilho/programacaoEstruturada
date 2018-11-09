#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

no* allocNo(){
    no* novo;
    if((novo = (no *) malloc(sizeof(no))) == NULL){
        printf("Acabou a memória.");
        exit(1);
    }
    return novo;
}

pilha* criaPilhaVazia(){
    pilha* pilha = malloc(sizeof(pilha));
    if(pilha == NULL){
        printf("Acabou a memoria");
        exit(1);
    }
    return pilha;
}

void empilha(pilha* p, int num){
    no* temp = p->topo;

    no* novo = allocNo();
    novo->prox = temp;
    novo->valor = num;

    p->topo = novo;
}

int desempilha(pilha* p){
    no* temp = p->topo;
    p->topo = temp->prox;
    
    int valor = temp->valor;
    free(temp);
    
    return valor;
}

void imprimir(pilha* p){
    no* atual = p->topo;
    int i = 0;
    while(atual != NULL){
        printf("[%d] = %d\n", i, atual->valor);
        atual = atual->prox;
        i++;
    }
}