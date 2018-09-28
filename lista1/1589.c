#include <stdio.h>

void main(){
    int i, numTestes;

    scanf("%d", &numTestes);

    for(i = 0; i < numTestes; i++){
        int r1, r2;

        scanf("%d", &r1);
        scanf("%d", &r2);

    
        printf("%d\n", (r1 + r2));
    }
}