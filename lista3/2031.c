#include <stdio.h>
#include <string.h>

void jogar(char j1[], char j2[]){
    if(strcmp(j1, "ataque") == 0){
        if(
            strcmp(j2, "pedra") == 0 ||
            strcmp(j2, "papel") == 0
        ) printf("Jogador 1 venceu\n");
        else printf("Aniquilacao mutua\n");
    } else if(strcmp(j1, "pedra")){
        if(strcmp(j2, "papel")) printf("Jogador 1 venceu\n");
        if(strcmp(j2, "pedra")) printf("Sem ganhador\n");
    }
}

void main(){
    int n;
    scanf("%d", &n);

    char j1[10], j2[10];
    int i;
    for(i = 0; i < n; i++){
        scanf("%s", j1);
        scanf("%s", j2);

        jogar(j1, j2);
    }
}