#include <stdio.h>
#include <math.h>

float calcDist(float x1, float y1, float x2, float y2);

void main(){
    float x1, y1, x2, y2;
    do{
        scanf("%f", &x1);
        scanf("%f", &y1);
        scanf("%f", &x2);
        scanf("%f", &y2);

        printf("%f\n", calcDist(x1, y1, x2, y2));
    }while(x1 != 0 || y1 != 0 || x2 != 0 || y2 != 0);
}

float calcDist(float x1, float y1, float x2, float y2){
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}