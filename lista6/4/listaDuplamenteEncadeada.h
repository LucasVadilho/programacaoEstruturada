typedef struct no{
    int valor;
    struct no* ant;
    struct no* prox;
} no;

typedef struct listaDuplamenteEncadeada{
    no* inicio;
    no* fim;
    int tamanho;
}listaDuplamenteEncadeada;

listaDuplamenteEncadeada* criaListaVazia();

int listaVazia(listaDuplamenteEncadeada* lista);

void inserirInicio(listaDuplamenteEncadeada* lista, int n);

void inserirFim(listaDuplamenteEncadeada* lista, int n);

void removerInicio(listaDuplamenteEncadeada* lista);

void removerFim(listaDuplamenteEncadeada* lista);

int busca(listaDuplamenteEncadeada* lista, int num);

void imprimir(listaDuplamenteEncadeada* lista);

int tamanhoLista(listaDuplamenteEncadeada* lista);

void liberarLista(listaDuplamenteEncadeada* lista);