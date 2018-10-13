#include <stdio.h>

void main(){
    char alfabeto[26];

    while(scanf("%26s", alfabeto) != EOF){        
        int tamanhoMensagem;
        scanf("%d", &tamanhoMensagem);
        
        int j;
        for(j = 0; j < tamanhoMensagem; j++){
            int letra;
            scanf("%d", &letra);
            printf("%c", alfabeto[letra - 1]);
        }
        printf("\n");
    }
}