#include <stdio.h>

void main(){
    char frase[35] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int n;
    scanf("%d", &n);

    int i;
    for(i = 0; i < n; i++){
        printf("%c", frase[i]);
    }
    printf("\n");
}