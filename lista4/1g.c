#include <stdio.h>

float potencia(float x, int n){
    if(n == 0) return 1;
    if(n > 0) return x * potencia(x, n - 1);
    else return 1.0 / x * potencia(x, n + 1);
}

void main(){
    float x;
    printf("Digite x >= 0\n");
    scanf("%f", &x);
    int n;
    printf("Digite o valor inteiro n, positivo ou negativo, para calcular x^n\n");
    scanf("%d", &n);
    printf("%f^%d = %f\n", x, n, potencia(x, n));
}