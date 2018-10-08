#include <stdio.h>
#include <string.h>

void jogar(int sheldon, int raj, int num){
    if(sheldon == raj) printf("Caso #%d: De novo!\n", num);
    else if(
        (sheldon == 2 && raj == 1) ||
        (sheldon == 1 && raj == 0) ||
        (sheldon == 0 && raj == 3) ||
        (sheldon == 3 && raj == 4) ||
        (sheldon == 2 && raj == 3) ||
        (sheldon == 3 && raj == 1) ||
        (sheldon == 1 && raj == 4) ||
        (sheldon == 4 && raj == 2) ||
        (sheldon == 4 && raj == 0) ||
        (sheldon == 0 && raj == 2)
    ) printf("Caso #%d: Bazinga!\n", num);
    else printf("Caso #%d: Raj trapaceou!\n", num);
}

int stringToOp(char string[]){
    if(strcmp(string, "pedra") == 0) return 0;
    if(strcmp(string, "papel") == 0) return 1;
    if(strcmp(string, "tesoura") == 0) return 2;
    if(strcmp(string, "lagarto") == 0) return 3;
    if(strcmp(string, "Spock") == 0) return 4;
}

void main(){
    int qtd;
    scanf("%d", &qtd);

    int i;
    for(i = 0; i < qtd; i++){
        char sheldon[20];
        char raj[20];

        scanf("%s", sheldon);
        scanf("%s", raj);

        jogar(stringToOp(sheldon), stringToOp(raj), i + 1);
    }
}