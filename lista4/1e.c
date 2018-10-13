#include <stdio.h>

float f(int n){
    if(n == 0) return 1;
    float anterior = f(n - 1);
    return anterior + 1.0 / anterior;
}

void main(){
    int n;
    printf("Digite o valor para calcular f(n)\n");
    scanf("%d", &n);
    printf("f(%d) = %f\n", n, f(n));
}