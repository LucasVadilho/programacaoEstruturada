#include <stdio.h>

float soma();

void main(){
    float s = soma();
    printf("%f\n", s);
}

float soma(){
    int i, sinal = 1, numerador = 480, denominador = 10;
    float soma = 0;
    
    for(i = 0; i < 100; i++){
        soma += (float)numerador / denominador;

        sinal *= -1;
        numerador -= 5;
        denominador++;
    }
        
    return soma;
}
