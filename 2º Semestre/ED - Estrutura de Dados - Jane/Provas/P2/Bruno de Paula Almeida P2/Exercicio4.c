#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No {
    int dado;
    struct No* proximo;
}No;

    No *cabeca = novoNo->proximo;// ...ponteiro para o inicio da lista (pode ser NULL)
    No *novoNo = cabeca;// ...ponteiro para o novo nó a ser inserido, ja alocado com dados preenchidos