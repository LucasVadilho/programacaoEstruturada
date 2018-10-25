#include <stdio.h>

int MAX(int n, int *v){
    int max = *v;

    int i;
    for(i = 1; i < n; i++){
        if(*(v + i) > max) max = *(v + i);
    }

    return max;
}

void main(){
    int v[6];
    
    int i;
    for(i = 0; i < 6; i++){
        scanf("%d", &v[i]);
    }

    printf("max = %d\n", MAX(6, v));
}