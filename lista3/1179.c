#include <stdio.h>

void imprimir(char nome[], int vetor[], int tamanho){
    int i;
    for(i = 0; i < tamanho; i++){
        printf("%s[%d] = %d\n", nome, i, vetor[i]);
    }
}

void main(){
    int pCount = 0, iCount = 0, pares[5], impares[5];

    int i;
    for(i = 0; i < 15; i++){
        int n;
        scanf("%d", &n);

        if(n % 2 == 0){
            pares[pCount] = n;
            pCount++;
            if(pCount > 4){
                imprimir("par", pares, pCount);
                pCount = 0;
            }
        }else{
            impares[iCount] = n;
            iCount++;
            if(iCount > 4){
                imprimir("impar", impares, iCount);
                iCount = 0;
            }
        }
    }

    imprimir("impar", impares, iCount);
    imprimir("par", pares, pCount);
}