#include <stdio.h>

void main(){
    int i;
    unsigned long fib[61];
    fib[0] = 0;
    fib[1] = 1;

    for(i = 2; i < 61; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    int t;
    scanf("%d", &t);

    int termo;
    for(i = 0; i < t; i++){
        scanf("%d", &termo);
        
        printf("Fib(%d) = %ld\n", termo, fib[termo]);
    }
}