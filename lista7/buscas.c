#include "busca.h"

int buscaLinear(int tamanho, int* vetor, int n){
	int i;
	for(i = 0; i < tamanho; i++){
		if(vetor[i] == n) return i;
	}
	return -1;
}

int buscaLinearRecursiva(int tamanho, int* vetor, int n){
	int pos = tamanho - 1;

	if(pos < 0) return -1;

	if(vetor[pos] == n) return tamanho;

	return buscaLinearRecursiva(pos, vetor, n);
}

int buscaBinaria(int tamanho, int* vetor, int n){
	int inicio = 0, fim = tamanho - 1;
	int meio;

	while(fim > inicio){
		meio = (inicio + fim) / 2;

		if(vetor[meio] == n) return meio;

		if(vetor[meio] > n){
			inicio = meio + 1;
		} else{
			fim = meio - 1;
		}
	}

	return -1;
}

int buscaBinariaRecursiva(int inicio, int fim, int* vetor, int n){
	if(fim > inicio) return -1;
	
	int meio = (inicio + fim) / 2;
	
	if(vetor[meio] == n) return meio;

	if(vetor[meio] > n) return buscaBinariaRecursiva((meio + 1), fim, vetor, n);
	else return buscaBinariaRecursiva(inicio, (meio - 1), vetor, n);
}