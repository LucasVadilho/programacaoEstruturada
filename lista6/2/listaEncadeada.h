typedef struct no{
    int valor;
    struct no* prox;
} no;

no* criaListaVazia();

int listaVazia(no* lista);

void inserirInicio(no* lista, int n);

void inserirFim(no* lista, int n);

void removerInicio(no* lista);

void removerFim(no* lista);

int busca(no* lista, int num);

void imprimir(no* lista);

int tamanhoLista(no* lista);

void liberarLista(no* lista);

