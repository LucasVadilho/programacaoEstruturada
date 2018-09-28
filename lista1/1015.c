#include <stdio.h>
#include <math.h>

void main(){
    float x1, x2, y1, y2;
    
    scanf("%f", &x1);
    scanf("%f", &y1);
    scanf("%f", &x2);
    scanf("%f", &y2);

    float distSquared = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    
    printf("%.4f\n", sqrt(distSquared));
}