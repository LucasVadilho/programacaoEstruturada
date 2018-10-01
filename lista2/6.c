#include <stdio.h>

int mult(int a, int b);

void main(){
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d\n", mult(a, b));
}

int mult(int a, int b){
    int soma = 0;
    do{
        if(a % 2 != 0) soma += b;

        a /= 2;
        b += b;
    }while(a != 0);

    return soma;
}