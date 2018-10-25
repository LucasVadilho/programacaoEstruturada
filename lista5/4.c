/*
4) Entenda o que o programa abaixo, simulando sua execução passo a passo. Depois disso, implemente-o.

Criamos 3 inteiros a, b, c e um ponteiro para inteiro ptr. 

Inicializamos a = 3 e b = 7.

Colocamos em ptr o endereço de a, logo *ptr = 3.

Inicializamos c = *ptr = 3.

Alteramos o valor de ptr para o endereço de b, logo *ptr = 7.

Alteramos o valor de a = *ptr = 7.

Alteramos o valor de ptr para o endereço de c, logo *ptr = 3.

Alteramos o valor de b = *ptr = 3.

No fim, temos a = 7 e b = 3.
*/

#include <stdio.h>

void main(){
    int a, b, c, *ptr;

    a = 3;
    b = 7;
    printf("a = %d, b = %d\n", a, b);

    ptr = &a;
    c = *ptr;
    ptr = &b;
    a = *ptr;
    ptr = &c;
    b = *ptr;

    printf("a = %d, b = %d\n", a, b);
}