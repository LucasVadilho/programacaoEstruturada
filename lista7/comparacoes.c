#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "buscas.h"
#include "sorts.h"

int* geraVetorAleatorio(int tamanho){
    srand(time(NULL));
    int* v = malloc(tamanho * sizeof(int));
    int i;
    for(i = 0; i < tamanho; i++){
        v[i] = rand();
    }
    return v;
}

int* geraVetorOrdenado(int tamanho){
    srand(time(NULL));
    int* v = malloc(tamanho * sizeof(int));
    int i;
    for(i = 0; i < tamanho; i++){
        v[i] = i;
    }
    return v;
}

int* geraCopia(int tamanho, int *v){
    int* copia = malloc(tamanho * sizeof(int));

    int i;
    for(i = 0; i < tamanho; i++){
        copia[i] = v[i];
    }
    return copia;
}

void comparaBuscas(int tamanho, int num){
    printf("%20d", tamanho); 
    clock_t t1, t2;
    int *vetor = geraVetorOrdenado(tamanho);

    int i;
    for(i = 1; i <= 4; i++){
        t1 = clock();
        switch(i){
            case 1:
                buscaLinear(tamanho, vetor, num);
                break;
            case 2:
                buscaBinaria(tamanho, vetor, num);
                break;
            case 3:
                buscaLinearRecursiva(tamanho, vetor, num);
                break;
            case 4:
                buscaBinariaRecursiva(0, tamanho, vetor, num);
                break;
        }
        t2 = clock();
        printf("%20.6f", (double)(t2 - t1) / CLOCKS_PER_SEC);
    }
    printf("\n");
}

void comparaSorts(int tamanho){
    printf("%20d", tamanho); 
    clock_t t1, t2;
    int *vetor = geraVetorAleatorio(tamanho);

    int i;
    for(i = 1; i <= 3; i++){
        int* copia = geraCopia(tamanho, vetor);
        t1 = clock();
        switch(i){
            case 1:
                bubbleSort(tamanho, copia);
                break;
            case 2:
                selectionSort(tamanho, copia);
                break;
            case 3:
                insertionSort(tamanho, copia);
                break;
        }
        t2 = clock();
        free(copia);
        printf("%20.6f", (double)(t2 - t1) / CLOCKS_PER_SEC);
    }
    printf("\n");
}

void main(){
    printf("#################\nComparando Buscas\n\n");
    printf("%20s%20s%20s%20s%20s\n", "Tamanho vetor", "Linear", "Binaria", "Linear Recursiva", "Binaria Recursiva");

    comparaBuscas(100, rand());
    comparaBuscas(1000, rand());
    comparaBuscas(10000, rand());
    comparaBuscas(40000, rand());
    comparaBuscas(80000, rand());
    comparaBuscas(200000, rand()); //Foi preciso aumentar stack (ulimit -S -s 131072)
    comparaBuscas(1000000, rand());
    comparaBuscas(2000000, rand());
    
    printf("\n#################\nComparando Sorts\n\n");
    printf("%20s%20s%20s%20s\n", "Tamanho vetor", "Bubble", "Selection", "Insertion");
    comparaSorts(100);
    comparaSorts(1000);
    comparaSorts(10000);
    comparaSorts(40000);
    comparaSorts(80000);
    comparaSorts(200000);
}