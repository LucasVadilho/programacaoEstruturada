#include <stdio.h>

float potenciaDe2(int n){
    if(n == 0) return 1;
    if(n > 0) return 2 * potenciaDe2(n - 1);
    else return 1.0 / 2 * potenciaDe2(n + 1);
}

void main(){
    int n;
    printf("Digite o valor inteiro, positivo ou negativo, para calcular 2^n\n");
    scanf("%d", &n);
    printf("2^%d = %f\n", n, potenciaDe2(n));
}