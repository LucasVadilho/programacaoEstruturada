#include <stdio.h>

float soma();

void main(){
    float s = soma();
    printf("%f\n", s);
}

float soma(){
    int i;
    float soma = 0;
    
    for(i = 1; i <= 50; i++){
        soma += (float)(2 * i - 1) / i;
    }
    
    return soma;
}
