/* 7) Suponha que as declarações e atribuições simultâneas tenham sido realizadas nas variáveis listadas abaixo:
    int v[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int * p = &v[1], * q = &v[5];

(a) Qual o valor de *(p + 3)?
14

(b) Qual o valor de *(q - 3)?
34

(c) Qual o valor de q - p?
v+5 - v+1 = 4

(d) A expressão p < q tem valor verdadeiro ou falso?
Verdadeiro, v+1 < v+5

(e) A expressão *p < *q tem valor verdadeiro ou falso?
Falso, 15 > 2
*/

#include <stdio.h>

void main(){
    int v[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int * p = &v[1], * q = &v[5];

    printf("a) %d\n", *(p + 3));
    printf("b) %d\n", *(q - 3));
    printf("c) %ld\n", (q - p));
    printf("d) %d\n", p < q);
    printf("e) %d\n", *p < *q);
}