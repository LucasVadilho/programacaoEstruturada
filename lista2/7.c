#include <stdio.h>

int mdc (int a, int b);

void main(){
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d\n", mdc(a, b));
}

int mdc(int a, int b){
    int menor = a >= b ? b : a;

    int i;
    for(i = menor; i > 0; i--){
        if(a % i == 0 && b % i == 0) return i;
    }
}