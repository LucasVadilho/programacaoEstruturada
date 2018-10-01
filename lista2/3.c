#include <stdio.h>

float y(float x);
float f(float x);
float h(float x);
float g(float x);

void main(){
    int i;
    for(i = 0; i < 10; i++){
        printf("%d\t%f\n", i + 1, y(i + 1));
    }
}

float y(float x){
    return f(x) + g(x);
}

float f(float x){
    float hx = h(x);
    return hx >= 0 ? hx : 1;
}

float h(float x){
    return x * x - 16;
}

float g(float x){
    float fx = f(x);
    return fx == 0 ? h(x) : 0;
}
