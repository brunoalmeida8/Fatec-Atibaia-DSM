#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Estrutura do nó da lista de adjacência
typedef struct No
{
    int vertice;
    struct No* prox;
} No;

// Estrutura do grafo
typedef struct Grafo
{
    int numVertices;
    No* listaAdj[MAX];
} Grafo;

// Estrutura da fila
typedef struct Fila
{
    int itens[MAX];
    int inicio;
    int fim;
} Fila;

// Funções da fila
Fila* criarFila()
{
    Fila* f = (Fila*)malloc(sizeof(Fila));
    f->inicio = 0;
    f->fim = -1;
    return f;
}

int filaVazia(Fila* f)
{
    return f->fim < f->inicio;
}

void enfileirar(Fila* f, int valor)
{
    f->itens[++f->fim] = valor;
}

int desenfileirar(Fila* f)
{
    return f->itens[f->inicio++];
}

// Função para criar o grafo
Grafo* criarGrafo(int vertices)
{
    Grafo* g = (Grafo*)malloc(sizeof(Grafo));
    g->numVertices = vertices;

    for (int i = 0; i < vertices; i++) {
        g->listaAdj[i] = NULL;
    }
    return g;
}

// Adiciona aresta (grafo não direcionado)
void adicionarAresta(Grafo* g, int origem, int destino)
{
    No* novo = (No*)malloc(sizeof(No));
    novo->vertice = destino;
    novo->prox = g->listaAdj[origem];
    g->listaAdj[origem] = novo;

    novo = (No*)malloc(sizeof(No));
    novo->vertice = origem;
    novo->prox = g->listaAdj[destino];
    g->listaAdj[destino] = novo;
}

// Algoritmo BFS
void bfs(Grafo* g, int inicio)
{
    int visitado[MAX] = {0};
    Fila* fila = criarFila();

    visitado[inicio] = 1;
    enfileirar(fila, inicio);

    printf("Ordem de visita BFS: ");

    while (!filaVazia(fila)) {
        int atual = desenfileirar(fila);
        printf("%d ", atual);

        No* temp = g->listaAdj[atual];
        while (temp != NULL) {
            int vizinho = temp->vertice;
            if (!visitado[vizinho]) {
                visitado[vizinho] = 1;
                enfileirar(fila, vizinho);
            }
            temp = temp->prox;
        }
    }
    printf("\n");
}

// Função principal
int main()
{
    Grafo* g = criarGrafo(4);

    adicionarAresta(g, 0, 1);
    adicionarAresta(g, 0, 2);
    adicionarAresta(g, 1, 3);

    bfs(g, 0);

    return 0;
}
