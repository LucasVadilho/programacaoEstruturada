int* bubbleSort(int tamanho, int* vetor){
    int i,j;
    for(i = 0; i < tamanho; i++){
        for(j = i + 1; j < tamanho; j++){
            if(vetor[j] < vetor[i]){
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
    return vetor;
}
    

int* selectionSort(int tamanho, int* vetor){
    int i, j;
    for(i = 0; i < tamanho; i++){
        int menor = i;
        for(j = i + 1; j < tamanho; j++){
            if(vetor[menor] > vetor[j]) menor = j;
        }
        int temp = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = temp;
    }
    return vetor;
}

int* insertionSort(int tamanho, int* vetor){
    int i, j;
    for(i = 1; i < tamanho; i++){
        int valor = vetor[i];
        j = i - 1;
        while(vetor[j] > valor && j >= 0){
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = valor;
    }
    return vetor;
}

#include <stdio.h>

void imprimirVetor(int tamanho, int* vetor){
    int i;
    for(i = 0; i < tamanho; i++){
        printf("v[%d] = %d\n", i, vetor[i]);
    }
    printf("\n");
}