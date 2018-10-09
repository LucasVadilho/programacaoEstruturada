#include <stdio.h>

void categoriza(int lesmas[], int tamanho){
    int maisRapida = 0;
    int i;
    for(i = 1; i < tamanho; i++){
        maisRapida = (lesmas[i] > lesmas[maisRapida]) ? i : maisRapida;
    }

    if(lesmas[maisRapida] < 10) printf("1\n");
    else if(lesmas[maisRapida] < 20) printf("2\n");
    else printf("3\n");
}

void main(){
    int l;

    while(scanf("%d", &l) != EOF){
        int lesmas[l];

        int i;
        for(i = 0; i < l; i++){
            scanf("%d", &lesmas[i]);
        }

        categoriza(lesmas, l);
    } 
}