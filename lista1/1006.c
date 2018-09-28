#include <stdio.h>

void main(){
    float a, b, c;
    
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    printf("MEDIA = %.1f\n", (2 * a + 3 * b + 5 * c) / 10);
}