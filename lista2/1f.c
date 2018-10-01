#include <stdio.h>

float soma();

void main(){
    float s = soma();
    printf("%f\n", s);
}

float soma(){
    int sinal = 1, i = 0;
    float termo = 0, pi = 0;
    
    do{
        termo = 4.0 / (2 * i + 1);
        pi += sinal * termo;
        i++;
        sinal *= -1;
    }while(termo > 0.0001);
    
    return pi;
}
