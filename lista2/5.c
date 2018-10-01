#include <stdio.h>
#include <math.h>

float f(float x, float y);

void main(){
    int i, j;

    printf("x\ty\tf(x,y)\n");

    for(i = 0; i < 10; i++){
        for(j = 0; j < 6; j++){
            int x = (i + 1) * (i + 1);
            int y = j;
            printf("%d\t%d\t%f\n", x, y, f(x, y));
        }
    }
}

float f(float x, float y){
    float num = pow(x, 2) + 3 * x + pow(y, 2);
    float den = x * y - 5 * y - 3 * x + 15;
    return(num / den);
}