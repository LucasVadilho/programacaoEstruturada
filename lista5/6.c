#include <stdio.h>

void min_max(int n, int v[n], int *max, int *min){
    *max = v[0];
    *min = v[0];

    int i;
    for(i = 1; i < n; i++){
        if(v[i] > *max) *max = v[i];
        else if(v[i] < *min) *min = v[i];
    }
}

void main(){
    int n;
    scanf("%d", &n);

    int v[n];

    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    int max, min;
    min_max(n, v, &max, &min);
    printf("max = %d, min = %d\n", max, min);
}