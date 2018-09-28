#include <stdio.h>

void main(){
    float total = 0;
    int i;

    for(i = 0; i < 2; i++){
        int codigo, qtd;
        float preco;

        scanf("%d", &codigo);
        scanf("%d", &qtd);
        scanf("%f", &preco);

        total += qtd * preco;
    }
    
    printf("VALOR A PAGAR: R$ %.2f\n", total);
}