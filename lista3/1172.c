#include <stdio.h>

void main(){
    int i, x[10];
    for(i = 0; i < 10; i++){
        scanf("%d", &x[i]);
        if(x[i] <= 0) x[i] = 1;
        printf("X[%d] = %d\n", i, x[i]);
    }
}