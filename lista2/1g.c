#include <stdio.h>

float macLaurinTruncada(float a, int termos);
float potencia(float a, int b);
float fatorial(float n);

void main(){
    printf("A\tsen(A)\n");
    
    float i;
    for(i = 0; i <= 63; i ++){
        float angulo = (float)i/10;
        printf("%f\t%f\n", angulo, macLaurinTruncada(angulo, 4));
    }
}

float macLaurinTruncada(float angulo, int termos){
    float sen = 0;
    int impar, sinal = 1;
    
    for(int i = 0; i < termos; i++){
        impar = 2 * i + 1;
        sen += sinal * potencia(angulo, impar) / fatorial(impar);
        sinal *= -1;
    }
    
    return sen;
}

float potencia(float a, int b){
    float r = a;
    
    for(int i = 0; i < b - 1; i++){
        r *= a;
    }
    
    return r;
}

float fatorial(float n){
    if(n == 1) return 1;
    
    return n * fatorial(n - 1);
}
