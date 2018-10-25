/*8) Qual o conteúdo do vetor v após a execução do trecho de código abaixo?

O programa inverte os valores de v, logo após a execução temos:
    v = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
*/

#include <stdio.h>
#define N 10

void main(){
    int v[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = &v[0], *q = &v[N - 1], temp;

    while(p < q){
        temp = *p;
        *p++ = *q;
        *q-- = temp;
    }

    int i;
    for(i = 0; i < N; i++){
        printf("%d\n", v[i]);
    }
}