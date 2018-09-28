#include <stdio.h>

void main(){
    int i, n, pares = 0, positivos = 0, zeros = 0, inputs = 5;

    for(i = 0; i < inputs; i++){
        scanf("%d", &n);

        pares += (n % 2 == 0) ? 1 : 0;
        positivos += (n > 0) ? 1 : 0;
        zeros += (n == 0) ? 1 : 0;
    }
    
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", inputs - pares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", inputs - positivos - zeros);
}