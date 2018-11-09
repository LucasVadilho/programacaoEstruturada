#include <stdio.h>
#include <stdlib.h>
#include "listaEncadeadaDescritor.h"

//typedef struct no{
    //int valor;
    //no* prox;
//}no;
//
//typedef struct listaEncadeadaDescritor*{
    //no* inicio;
    //no* fim;
    //int tamanho;
//}listaEncadeadaDescritor*;

no* allocNo(){
    no* novo;
    if((novo = (no *) malloc(sizeof(no))) == NULL){
        printf("Acabou a memória.");
        exit(1);
    }
    return novo;
}

listaEncadeadaDescritor* criaListaVazia(){
    listaEncadeadaDescritor* lista = (listaEncadeadaDescritor *) malloc(sizeof(listaEncadeadaDescritor));
    lista->inicio = NULL;
    lista->fim = NULL;
    lista->tamanho = 0;
    return lista;
}

int listaVazia(listaEncadeadaDescritor* lista){
    return(lista->tamanho == 0);
}

void inserirInicio(listaEncadeadaDescritor* lista, int n){
    no* novo = allocNo();
    novo->valor = n;
    novo->prox = lista->inicio;

    if(listaVazia(lista)) lista->fim = novo;

    lista->inicio = novo;
    lista->tamanho++;
}

void inserirFim(listaEncadeadaDescritor* lista, int n){
    no* novo = allocNo();
    novo->valor = n;
    novo->prox = NULL;
    
    if(!listaVazia(lista)){
        (lista->fim)->prox = novo;
    } else{
        lista->inicio = novo;
    }

    lista->fim = novo;
    lista->tamanho++;
}

void removerInicio(listaEncadeadaDescritor* lista){
    if(!listaVazia(lista)){
        no* temp = lista->inicio;
        lista->inicio = temp->prox;
        free(temp);
    
        lista->tamanho--;
    }
}

void removerFim(listaEncadeadaDescritor* lista){
    no* antesDoAtual;
    no* atual = lista->inicio;

    while(atual->prox != NULL){
        antesDoAtual = atual;
        atual = atual->prox;
    }

    antesDoAtual->prox = NULL;
    lista->fim = antesDoAtual;
    free(atual);

    lista->tamanho--;
    if(listaVazia(lista)) lista->inicio = NULL;
}

int busca(listaEncadeadaDescritor* lista, int num){
    no* atual = lista->inicio;
    while(atual != NULL){
        if(atual->valor == num) return 1;
        atual = atual->prox;
    }
    return 0;
}

void imprimir(listaEncadeadaDescritor* lista){
    no* atual = lista->inicio;
    int i = 0;
    while(atual != NULL){
        printf("[%d] = %d\n", i, atual->valor);
        i++;
        atual = atual->prox;
    }
}

int tamanhoLista(listaEncadeadaDescritor* lista){
    return lista->tamanho;
}

void liberarLista(listaEncadeadaDescritor* lista){
    no* atual = lista->inicio;
    while(atual != NULL){
        no* temp = atual;
        atual = atual->prox;
        free(temp);
    }
    free(lista);
}