#include <stdio.h>
#include <stdlib.h>
#include "listaEncadeada.h"

no* inicio;

no* criaListaVazia(){
    inicio = (no*) malloc(sizeof(no));
    (*inicio).prox = NULL;
    
    return inicio;
}

int listaVazia(no* lista){
    if((*lista).prox == NULL) return 1;
    return 0;
}

void inserirInicio(no* lista, int n){
    no* item = (no*) malloc(sizeof(no));
    (*item).valor = n;
    (*item).prox = (*lista).prox;
    (*lista).prox = item;
}

void inserirFim(no* lista, int n){
    no* item = (no*) malloc(sizeof(no));
    (*item).valor = n;
    (*item).prox = NULL;

    no* atual = lista;
    while((*atual).prox != NULL){
        atual = (*atual).prox;
    }
    (*atual).prox = item;
}

void removerInicio(no* lista){
    no* temp = (*lista).prox;
    (*lista).prox = (*temp).prox;
    free(temp);
}

void removerFim(no* lista){
    no* antesDoAtual = lista;
    no* atual = (*lista).prox;
    while((*atual).prox != NULL){
        antesDoAtual = atual;
        atual = (*atual).prox;
    }
    
    (*antesDoAtual).prox = NULL;
    free(atual);
}

int busca(no* lista, int num){
    no* atual = (*lista).prox;
    while(atual != NULL){
        if((*atual).valor == num) return 1;
        atual = (*atual).prox;
    }
    return 0;
}

void imprimir(no* lista){
    no* atual = (*lista).prox;
    int i = 0;
    while(atual != NULL){
        printf("[%d] = %d\n", i, (*atual).valor);
        i++;
        atual = (*atual).prox;
    }
}

int tamanhoLista(no* lista){
    no* atual = (*lista).prox;
    int i = 0;
    while(atual != NULL){
        i++;
        atual = (*atual).prox;
    }
    return i;
}

void liberarLista(no* lista){
    no* atual = (*lista).prox;
    while(atual != NULL){
        no* temp = atual;
        atual = (*atual).prox;
        free(temp);
    }
    free(lista);
}