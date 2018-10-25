#include <stdio.h>
#include <stdlib.h>

void main(){
    int n;
    scanf("%d", &n);

    int *v = (int *) malloc(n * sizeof(int));

    int i;
    for(i = 0; i < n; i++){
        scanf("%d", (v + i));
    }

    for(i = 0; i < n; i++){
        printf("%d\n", *(v + i));
    }

    free(v);
}