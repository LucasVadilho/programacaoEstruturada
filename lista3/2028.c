#include <stdio.h>

int quantidade(int n){
    if(n == 0) return 1;
    return n + quantidade(n-1);
}

void preencheSubVetor(int vetor[], int i, int n){
    int j;
    for(j = i; j < i + n; j++){
        vetor[j] = n;
    }
}

void main(){
    int max = 200;
    int tamanhoVetor = quantidade(max);
    int vetor[tamanhoVetor];
    
    vetor[0] = 0;
    int i, n = 1;
    for(i = 1; i < tamanhoVetor; i += n - 1){
        preencheSubVetor(vetor, i, n);
        n++;
    }

    int s, cont = 1;
    while(scanf("%d", &s) != EOF){
        int qtd = quantidade(s);

        if(s == 0) printf("Caso %d: %d numero\n", cont , qtd);
        else printf("Caso %d: %d numeros\n", cont , qtd);
        
        int j;
        for(j = 0; j < qtd; j++){
            if(j == 0) printf("%d", vetor[j]);
            else printf("% d", vetor[j]);
        }
        
        printf("\n");
        printf("\n");

        cont++;
    }
}