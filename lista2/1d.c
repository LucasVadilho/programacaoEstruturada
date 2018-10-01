#include <stdio.h>

float soma();

void main(){
    float s = soma();
    printf("%f\n", s);
}

float soma(){
    int i;
    int sinal = 1;
    float soma = 0;
    
    for(i = 1; i <= 10; i++){
        soma += (float)sinal / i;
        sinal *= -1;
    }
        
    return soma;
}
