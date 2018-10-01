#include <stdio.h>
#include <math.h>

float aproxNewton(float n, int i);

void main(){
    float y;
    int i;

    scanf("%f", &y);

    printf("%f\n", aproxNewton(y, 80));
}

float aproxNewton(float n, int i){
    if(i == 1) return n / 2;

    float termoAnterior = aproxNewton(n, --i);

    return (pow(termoAnterior, 2) + n) / (2 * termoAnterior);
}