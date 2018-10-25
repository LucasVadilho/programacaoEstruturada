/*
3) Entenda o que o programa abaixo, simulando sua execução passo a passo. Depois disso, implemente-o.

Criamos 2 inteiros, a e b, e 2 ponteiros para inteiro, ptr1 e ptr2.

Ao ptr1 damos o endereço de a, e a ptr2 o de b.

Colocamos o valor de a = 1. Aumentamos em uma unidade o valor apontado por ptr1, logo a = *ptr1 = 2.

Colocamos o valor de b = a + *ptr1 = 2 + 2 = 4.

Finalmente, alteramos o valor apontado por ptr2, que é b, logo, *ptr2 = b = *ptr1 * *ptr2 = 2 * 4 = 8. 

Então temos: a = *ptr1 = 2 e b = *ptr2 = 8
*/

#include <stdio.h>

int main(void){
    int a, b, *ptr1, *ptr2;

    ptr1 = &a;
    ptr2 = &b;
    a = 1;
    (*ptr1)++;
    b = a + *ptr1;
    *ptr2 = *ptr1 * *ptr2;

    printf("a=%d, b=%d, *ptr1=%d, *ptr2=%d\n", a, b, *ptr1, *ptr2);

    return 0;
}