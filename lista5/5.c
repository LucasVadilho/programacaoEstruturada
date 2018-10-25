/*5) Entenda o que o programa abaixo, simulando sua execução passo a passo. Depois disso, implemente-o

Criamos 2 inteiros i e j, e 2 ponteiros para inteiro p e q.

Colocamos o endereço de i em p, depois q = p, de modo que, p = q = &i.

Alteramos o valor de *p = *q = i = 1.

Imprimimos: i = 1, *p = 1, *q = 1

Alteramos o valor de q para o endereço de j, o valor de i = 6 e o valor de *q = j = *p = i = 6.

Imprimimos: i = 6, j = 6, *p = 6, *q = 6
*/

#include <stdio.h>

void main(){
    int i, j, *p, *q;

    p = &i;
    q = p;
    *p = 1;
    printf("i = %d, *p = %d, *q = %d\n", i, *p, *q);

    q = &j;
    i = 6;
    *q = *p;
    printf("i = %d, j = %d, *p = %d, *q = %d\n", i, j, *p, *q);
}