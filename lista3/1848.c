#include <stdio.h>
#include <math.h>
#include <string.h>

int olhosParaInt(char olhos[]){
    int i, sum = 0;
    for(i = 0; i < 3; i++){
        sum += (olhos[i] == '*') ? pow(2, (2 - i)) : 0;
    }
    return sum;
}

void main(){
    char raven[100];
    int num = 0, caws = 0;

    while(caws < 3){
        scanf("%s", raven);

        if(strcmp(raven, "caw") == 0){
            scanf("%s", raven);
            
            caws++;
            printf("%d\n", num);
            num = 0;
        } else{
            num += olhosParaInt(raven);
        }
    }
}