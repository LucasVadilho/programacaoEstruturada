#include <stdio.h>

float soma();
float potenciaDe2(int ex);

void main(){
    float s = soma();
    printf("%f\n", s);
}

float soma(){
    int i;
    float soma = 0;
    
    for(i = 1; i <= 50; i++){
        soma += (float)(potenciaDe2(i) / (51 - i));
    }
    
    return soma;
}

float potenciaDe2(int expoente){
    int i;
    float r = 1;
    for(i = 0; i < expoente; i++){
        r *= 2;
    }
    return r;
}
