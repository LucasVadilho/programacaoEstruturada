#include <stdio.h>
#include <string.h>

void main(){
    int c;
    scanf("%d", &c);

    int i;
    for(i = 0; i < c; i++){
        char nome[500];
        int forca;

        scanf("%s", nome);
        scanf("%d", &forca);

        if(strcmp(nome, "Thor") == 0) printf("Y\n");
        else printf("N\n");
    }
}