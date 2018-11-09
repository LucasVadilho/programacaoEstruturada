#include <stdio.h>
#include "listaEncadeadaDescritor.h"

void main(){
    listaEncadeadaDescritor* lista = criaListaVazia();
    
    if(listaVazia(lista)) printf("Lista vazia\n");
    else printf("Lista não vazia\n");

    inserirInicio(lista, 42);
    inserirFim(lista, 12);
    inserirInicio(lista, 1);
    inserirFim(lista, 42);
    
    if(listaVazia(lista)) printf("Lista vazia\n");
    else printf("Lista não vazia\n");
    
    printf("%d\n", tamanhoLista(lista)); //4
    imprimir(lista); //1 42 12 42

    removerInicio(lista);
    printf("%d\n", tamanhoLista(lista)); //3
    imprimir(lista); //42 12 42

    removerFim(lista);
    inserirFim(lista, 108);
    printf("%d\n", tamanhoLista(lista)); //3
    imprimir(lista); //42 12 108

    int num = 12;
    if(busca(lista, num)) printf("O número %d está na lista\n", num);
    else printf("O número %d não está na lista\n", num);

    num = 112;
    if(busca(lista, num)) printf("O número %d está na lista\n", num);
    else printf("O número %d não está na lista\n", num);

    removerFim(lista);
    removerFim(lista);
    removerFim(lista);
    printf("%d\n", tamanhoLista(lista)); //0
    
    inserirFim(lista, 34);
    inserirInicio(lista, 12);
    printf("%d\n", tamanhoLista(lista)); //2
    imprimir(lista); //12 34
    
    removerInicio(lista);
    removerInicio(lista);
    printf("%d\n", tamanhoLista(lista)); //0

    inserirInicio(lista, 34);
    printf("%d\n", tamanhoLista(lista)); //1
    imprimir(lista); //34

    liberarLista(lista);
}