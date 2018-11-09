/*5) Implementar um TAD para pilha em lista encadeada com as seguintes operações:
1. Criar uma pilha vazia
2. Empilhamento
3. Desempilhamento
4. Imprime a pilha*/

typedef struct no{
    int valor;
    struct no* prox;
} no;

typedef struct pilha{
    no* topo;
} pilha;

pilha* criaPilhaVazia();

void empilha(pilha* p, int num);

int desempilha(pilha* p);

void imprimir(pilha* p);