#include <stdio.h>

int palindromo(int i, int tamanho, char *p){
    if(i == tamanho - 1 - i) return 1;
    return(p[i] == p[tamanho - 1 - i] && palindromo(++i, tamanho, p));
}

int eh_palindroma(int n, char *p){
    return palindromo(0, n, p);
}

void main(){
    int tamanho;
    printf("Digite o tamanho da palavra: ");
    scanf("%d", &tamanho);
    
    char palavra[tamanho];
    printf("Digite a palavra: ");
    scanf("%s", palavra);

    if(eh_palindroma(tamanho, palavra)) printf("A palavra %s é palindrômica\n", palavra);
    else printf("A palavra %s não é palindrômica\n", palavra);
}