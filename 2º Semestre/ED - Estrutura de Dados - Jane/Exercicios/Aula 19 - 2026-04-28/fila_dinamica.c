#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Estrutura de um nó da fila
typedef struct No
{
    int dado;
    struct No *prox;
} No;

// Estrutura da fila
typedef struct
{
    No *frente;
    No *tras;
} Fila;

// Inicializa a fila
void inicializar(Fila *fila)
{
    fila->frente = NULL;
    fila->tras = NULL;
}

// Verifica se a fila está vazia
int estaVazia(Fila *fila)
{
    return fila->frente == NULL;
}

// Enfileira um elemento
void enfileirar(Fila *fila, int valor)
{
    No *novo = (No *)malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro de alocação de memória!\n");
        return;
    }
    novo->dado = valor;
    novo->prox = NULL;

    if (estaVazia(fila)) {
        fila->frente = novo;
    } else {
        fila->tras->prox = novo;
    }
    fila->tras = novo;
    printf("Enfileirado: %d\n", valor);
}

// Desenfileira um elemento
int desenfileirar(Fila *fila)
{
    if (estaVazia(fila)) {
        printf("Fila vazia! Não é possível desenfileirar.\n");
        return -1;
    }

    No *temp = fila->frente;
    int valor = temp->dado;
    fila->frente = fila->frente->prox;

    if (fila->frente == NULL) {
        fila->tras = NULL;
    }

    free(temp);
    printf("Desenfileirado: %d\n", valor);
    return valor;
}

// Exibe os elementos da fila
void exibirFila(Fila *fila)
{
    if (estaVazia(fila)) {
        printf("Fila vazia!\n");
        return;
    }

    No *atual = fila->frente;
    printf("\n\nFila: ");
    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->prox;
    }
    printf("\n\n");
}

// Libera toda a memória da fila
void liberarFila(Fila *fila)
{
    while (!estaVazia(fila)) {
        desenfileirar(fila);
    }
}

int main()
{
    Fila fila;
    inicializar(&fila);

    enfileirar(&fila, 10);
    enfileirar(&fila, 20);
    enfileirar(&fila, 30);
    exibirFila(&fila);

    desenfileirar(&fila);
    exibirFila(&fila);

    enfileirar(&fila, 40);
    enfileirar(&fila, 50);
    exibirFila(&fila);

    liberarFila(&fila);
    return 0;
}
