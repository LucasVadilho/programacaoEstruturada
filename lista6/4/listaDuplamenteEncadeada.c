#include <stdio.h>
#include <stdlib.h>
#include "listaDuplamenteEncadeada.h"

no* allocNo(){
    no* novo;
    if((novo = (no *) malloc(sizeof(no))) == NULL){
        printf("Acabou a memória.");
        exit(1);
    }
    return novo;
}

listaDuplamenteEncadeada* criaListaVazia(){
    listaDuplamenteEncadeada* lista = (listaDuplamenteEncadeada *) malloc(sizeof(listaDuplamenteEncadeada));
    if(lista == NULL){
        printf("Acabou a memória.");
        exit(1);
    }
    lista->inicio = NULL;
    lista->fim = NULL;
    lista->tamanho = 0;
    return lista;
}

int listaVazia(listaDuplamenteEncadeada* lista){
    return(lista->tamanho == 0);
}

void inserirInicio(listaDuplamenteEncadeada* lista, int n){
    no* novo = allocNo();
    novo->valor = n;
    novo->ant = NULL;
    if(!listaVazia(lista)){
        novo->prox = lista->inicio;
        (lista->inicio)->ant = novo;
    } else{
        novo->prox = NULL;
        lista->fim = novo;
    }
    
    lista->inicio = novo;
    lista->tamanho++;
}

void inserirFim(listaDuplamenteEncadeada* lista, int n){
    no* novo = allocNo();
    novo->valor = n;
    novo->prox = NULL;
    if(!listaVazia(lista)){
        (lista->fim)->prox = novo;
        novo->ant = lista->fim;
    } else{
        novo->ant = NULL;
        lista->inicio = novo;
    }

    lista->fim = novo;
    lista->tamanho++;
}

void removerInicio(listaDuplamenteEncadeada* lista){
    no* temp = lista->inicio;
    lista->inicio = temp->prox;
    (lista->inicio)->ant = NULL;
    free(temp);

    lista->tamanho--;
}

void removerFim(listaDuplamenteEncadeada* lista){
    no* temp = lista->fim;
    lista->fim = temp->ant;
    if(lista->fim != NULL){
        (lista->fim)->prox = NULL;
    }
    free(temp);

    lista->tamanho--;
}

int busca(listaDuplamenteEncadeada* lista, int num){
    no* atual = lista->inicio;
    while(atual != NULL){
        if(atual->valor == num) return 1;
        atual = atual->prox;
    }
    return 0;
}

void imprimir(listaDuplamenteEncadeada* lista){
    no* atual = lista->inicio;
    int i = 0;
    while(atual != NULL){
        printf("[%d] = %d\n", i, atual->valor);
        i++;
        atual = atual->prox;
    }
}

int tamanhoLista(listaDuplamenteEncadeada* lista){
    return(lista->tamanho);
}

void liberarLista(listaDuplamenteEncadeada* lista){
    no* atual = lista->inicio;
    while(atual != NULL){
        no* temp = atual;
        atual = atual->prox;
        free(temp);
    }
    free(lista);
}