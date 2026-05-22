#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Estrutura para nó da lista de adjacência
typedef struct AdjNode {
    int vertice;
    struct AdjNode *prox;
} AdjNode;

// Estrutura do grafo
typedef struct Grafo {
    int numVertices;
    AdjNode **listas; // vetor de ponteiros para listas
} Grafo;

// Função para criar um nó
AdjNode* criarNo(int vertice) {
    AdjNode *novo = (AdjNode*)malloc(sizeof(AdjNode));
    novo->vertice = vertice;
    novo->prox = NULL;
    return novo;
}

// Criar grafo
Grafo* criarGrafo(int vertices) {
    Grafo *grafo = (Grafo*)malloc(sizeof(Grafo));
    grafo->numVertices = vertices;
    grafo->listas = (AdjNode**)malloc(vertices * sizeof(AdjNode*));

    for (int i = 0; i < vertices; i++) {
        grafo->listas[i] = NULL;
    }
    return grafo;
}

// Adicionar aresta (não direcionado)
void adicionarAresta(Grafo *grafo, int origem, int destino) {
    // Adiciona destino na lista de origem
    AdjNode *novo = criarNo(destino);
    novo->prox = grafo->listas[origem];
    grafo->listas[origem] = novo;

    // Adiciona origem na lista de destino
    novo = criarNo(origem);
    novo->prox = grafo->listas[destino];
    grafo->listas[destino] = novo;
}

// Exibir grafo
void exibirGrafo(Grafo *grafo) {
    for (int i = 0; i < grafo->numVertices; i++) {
        AdjNode *temp = grafo->listas[i];
        printf("Vértice %d: ", i);
        while (temp) {
            printf("%d -> ", temp->vertice);
            temp = temp->prox;
        }
        printf("NULL\n");
    }
}

// Liberar memória
void liberarGrafo(Grafo *grafo) {
    for (int i = 0; i < grafo->numVertices; i++) {
        AdjNode *temp = grafo->listas[i];
        while (temp) {
            AdjNode *remover = temp;
            temp = temp->prox;
            free(remover);
        }
    }
    free(grafo->listas);
    free(grafo);
}

// Função principal
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int vertices = 5;
    Grafo *grafo = criarGrafo(vertices);

    adicionarAresta(grafo, 0, 1);
    adicionarAresta(grafo, 0, 4);
    adicionarAresta(grafo, 1, 2);
    adicionarAresta(grafo, 1, 3);
    adicionarAresta(grafo, 1, 4);
    adicionarAresta(grafo, 2, 3);
    adicionarAresta(grafo, 3, 4);

    exibirGrafo(grafo);

    liberarGrafo(grafo);
    return 0;
}
