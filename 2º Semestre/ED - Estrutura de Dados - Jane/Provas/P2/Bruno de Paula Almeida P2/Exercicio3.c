#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct RequisicaoIO {
    int id;                      
    char descricao[100];         
    struct RequisicaoIO *prox;   
} RequisicaoIO;

typedef struct FilaIO {
    RequisicaoIO *inicio;        
    RequisicaoIO *fim;           
} FilaIO;




int main() {
    FilaIO fila;
    fila.inicio = NULL;
    fila.fim = NULL;

    RequisicaoIO *nova_requisicao = (RequisicaoIO*) malloc(sizeof(RequisicaoIO));

    if (nova_requisicao == NULL) {
        printf("Erro ao alocar memoria\n");
        return;
    }

   
    nova_requisicao->id = 102;
    strcpy(nova_requisicao->descricao, "leitura de bloco 57");
    nova_requisicao->prox = NULL;

    printf("Requisicao com alocacao dinamica:\n");
    printf("ID: %d - Descricao: %s\n", nova_requisicao->id, nova_requisicao->descricao);

    free(nova_requisicao);

    return 0;
}
