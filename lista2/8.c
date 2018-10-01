#include <stdio.h>

int bloco(int m);

void main(){
    printf("%d\n", bloco(5));
}

int bloco(int m){
    int pares = 0;

    int i = 0;
    for(i = 0; i < m; i++){
        int n;
        scanf("%d", &n);

        pares += n % 2 == 0;
    }

    if(pares == m) return 0;
    if(pares == 0) return 1;
    return -1;
}