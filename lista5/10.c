#include <stdio.h>

void mm(int n, int *v, int *min, int *max){
    *min = *(v + 0);
    *max = *(v + 0);

    int i;
    for(i = 1; i < n; i++){
        if(*(v + i) > *max) *max = *(v + i);
        else if(*(v + i) < *min) * min = *(v + i);
    }
}

void main(){
    int v[6] = {1, 6, 53, 43, 0, 102};

    int max, min;

    mm(6, v, &min, &max);

    printf("max = %d, min = %d\n", max, min);
}