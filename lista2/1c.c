#include <stdio.h>

float soma();
int mult(int n);

void main(){
    float s = soma();
    printf("%f\n", s);
}

float soma(){
    int i;
    float soma = 0;
    
    for(i = 1; i <= 37; i++){
        soma += ((float)(mult(39 - i)) / i);
    }
        
    return soma;
}

int mult(int n){
    return n * (n - 1);
}
