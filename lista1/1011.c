#include <stdio.h>

void main(){
    double raio, pi = 3.14159;

    scanf("%lf", &raio);

    printf("VOLUME = %.3lf\n", (4.0 / 3) * pi * raio * raio * raio);
}