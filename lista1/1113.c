#include <stdio.h>

void main(){
    int v1, v2;

    do{
        scanf("%d", &v1);
        scanf("%d", &v2);

        if(v1 > v2) printf("Decrescente\n");
        if(v1 < v2) printf("Crescente\n");
    }while(v1 != v2);
}