#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*
  Estrutura do nó da lista (uso de struct autoreferenciada)
*/
typedef struct No {
    int codigo;
    char nome[30];
    float nota;
    struct No *prox;
} No;

/* Função para inserir no início da lista */
void inserirInicio(No **lista, int codigo, char nome[], float nota)
{
    No *novo = (No *)malloc(sizeof(No));

    novo->codigo = codigo;
    strcpy(novo->nome, nome);
    novo->nota = nota;

    novo->prox = *lista;
    *lista = novo;
}

/* Função para inserir no fim da lista */
void inserirFim(No **lista, int codigo, char nome[], float nota) {
    No *novo = (No *)malloc(sizeof(No));
    No *aux = *lista;

    novo->codigo = codigo;
    strcpy(novo->nome, nome);
    novo->nota = nota;
    novo->prox = NULL;

    if (*lista == NULL) {
        *lista = novo;
    } else {
        while (aux->prox != NULL) {
            aux = aux->prox;
        }
        aux->prox = novo;
    }
}

/* Função para inserir no meio da lista (por posição) */
void inserirMeio(No **lista, int codigo, char nome[], float nota, int posicao) {
    No *novo = (No *)malloc(sizeof(No));
    No *aux = *lista;
    int i;

    novo->codigo = codigo;
    strcpy(novo->nome, nome);
    novo->nota = nota;

    if (posicao == 0 || *lista == NULL) {
        inserirInicio(lista, codigo, nome, nota);
        return;
    }

    for (i = 0; i < posicao - 1 && aux->prox != NULL; i++) {
        aux = aux->prox;
    }

    novo->prox = aux->prox;
    aux->prox = novo;
}

/* Função para imprimir a lista */
void imprimirLista(No *lista) {
    No *aux = lista;

    if (aux == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    while (aux != NULL) {
        printf("Codigo: %d\n", aux->codigo);
        printf("Nome: %s\n", aux->nome);
        printf("Nota: %.2f\n", aux->nota);
        printf("Proximo nó: %p\n",aux->prox);
        printf("----------------------\n");
        aux = aux->prox;
    }
}


int main()
{
    setlocale(LC_ALL,"Portuguese");
    No *lista = NULL;

    inserirInicio(&lista, 1, "Ana", 8.5);
    inserirFim(&lista, 2, "Carlos", 7.2);
    inserirFim(&lista, 3, "Marina", 9.0);
    inserirMeio(&lista, 4, "Joao", 6.8, 1);

    printf("Conteudo da lista:\n");
    imprimirLista(lista);

    return 0;
}

