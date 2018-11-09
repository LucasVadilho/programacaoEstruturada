typedef struct no{
    int valor;
    struct no* prox;
} no;

typedef struct listaEncadeadaDescritor{
    no* inicio;
    no* fim;
    int tamanho;
}listaEncadeadaDescritor;

listaEncadeadaDescritor* criaListaVazia();

int listaVazia(listaEncadeadaDescritor* lista);

void inserirInicio(listaEncadeadaDescritor* lista, int n);

void inserirFim(listaEncadeadaDescritor* lista, int n);

void removerInicio(listaEncadeadaDescritor* lista);

void removerFim(listaEncadeadaDescritor* lista);

int busca(listaEncadeadaDescritor* lista, int num);

void imprimir(listaEncadeadaDescritor* lista);

int tamanhoLista(listaEncadeadaDescritor* lista);

void liberarLista(listaEncadeadaDescritor* lista);