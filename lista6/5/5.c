#include <stdio.h>
#include "pilha.h"

void main(){
    pilha* p = criaPilhaVazia();
    
    empilha(p, 10);
    empilha(p, 15);
    empilha(p, 16);
    empilha(p, 17);
    imprimir(p); //17, 16, 15, 10

    printf("%d desempilhado\n", desempilha(p)); //17
    printf("%d desempilhado\n", desempilha(p)); //16
    imprimir(p); //15 10

    printf("%d desempilhado\n", desempilha(p)); //15
    printf("%d desempilhado\n", desempilha(p)); //10
    imprimir(p); //

    empilha(p, 12);
    empilha(p, 15);
    imprimir(p); //15 12
}