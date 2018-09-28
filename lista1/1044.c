#include <stdio.h>

void main(){
    int A, B;
    
    scanf("%d", &A);
    scanf("%d", &B);
    
    printf((A % B == 0 || B % A == 0) ? "Sao Multiplos\n" : "Nao sao Multiplos\n");
}