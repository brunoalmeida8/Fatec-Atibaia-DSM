#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Estrutura do nó
typedef struct Node {
    int dado;
    struct Node *esq;
    struct Node *dir;
} Node;

// Criar nó
Node* criarNo(int valor) {
    Node *novo = (Node*)malloc(sizeof(Node));
    novo->dado = valor;
    novo->esq = NULL;
    novo->dir = NULL;
    return novo;
}

// Inserir na árvore (BST)
Node* inserir(Node *raiz, int valor) {
    if (raiz == NULL) {
        return criarNo(valor);
    }
    if (valor < raiz->dado) {
        raiz->esq = inserir(raiz->esq, valor);
    } else if (valor > raiz->dado) {
        raiz->dir = inserir(raiz->dir, valor);
    }
    return raiz;
}

// Buscar elemento
Node* buscar(Node *raiz, int valor) {
    if (raiz == NULL || raiz->dado == valor) {
        return raiz;
    }
    if (valor < raiz->dado) {
        return buscar(raiz->esq, valor);
    } else {
        return buscar(raiz->dir, valor);
    }
}

// Percurso em ordem (In-Order)
void emOrdem(Node *raiz) {
    if (raiz != NULL) {
        emOrdem(raiz->esq);
        printf("%d ", raiz->dado);
        emOrdem(raiz->dir);
    }
}

// Pré-Ordem
void preOrdem(Node *raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->dado);
        preOrdem(raiz->esq);
        preOrdem(raiz->dir);
    }
}

// Pós-Ordem
void posOrdem(Node *raiz) {
    if (raiz != NULL) {
        posOrdem(raiz->esq);
        posOrdem(raiz->dir);
        printf("%d ", raiz->dado);
    }
}

// Liberar memória
void liberarArvore(Node *raiz) {
    if (raiz != NULL) {
        liberarArvore(raiz->esq);
        liberarArvore(raiz->dir);
        free(raiz);
    }
}

// Função principal
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Node *raiz = NULL;

    // Inserindo elementos
    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 30);
    raiz = inserir(raiz, 70);
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 40);
    raiz = inserir(raiz, 60);
    raiz = inserir(raiz, 80);

    printf("Percurso em ordem: ");
    emOrdem(raiz);
    printf("\n");

    printf("Pré-Ordem: ");
    preOrdem(raiz);
    printf("\n");

    printf("Pós-Ordem: ");
    posOrdem(raiz);
    printf("\n");

    // Buscar elemento
    int valorBusca = 40;
    Node *resultado = buscar(raiz, valorBusca);
    if (resultado != NULL) {
        printf("Valor %d encontrado na árvore.\n", valorBusca);
    } else {
        printf("Valor %d não encontrado.\n", valorBusca);
    }

    liberarArvore(raiz);
    return 0;
}
