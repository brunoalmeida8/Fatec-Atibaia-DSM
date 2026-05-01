#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Estrutura do nó
typedef struct No {
    int dado;
    struct No *prox;
} No;

// Função para verificar se a pilha está vazia
int isEmpty(No *topo) {
    return topo == NULL;
}

// Função para empilhar (push)
void push(No **topo, int valor) {
    No *novo = (No *)malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro de alocação de memória!\n");
        return;
    }
    novo->dado = valor;
    novo->prox = *topo;
    *topo = novo;
    printf("Elemento %d empilhado com sucesso!\n", valor);
}

// Função para desempilhar (pop)
int pop(No **topo) {
    if (isEmpty(*topo)) {
        printf("Erro: pilha vazia!\n");
        return -1;
    }
    No *temp = *topo;
    int valor = temp->dado;
    *topo = temp->prox;
    free(temp);
    return valor;
}

// Função para consultar o topo
int peek(No *topo) {
    if (isEmpty(topo)) {
        printf("Pilha vazia!\n");
        return -1;
    }
    return topo->dado;
}

// Função para exibir a pilha
void exibir(No *topo) {
    if (isEmpty(topo)) {
        printf("Pilha vazia!\n");
        return;
    }
    printf("Elementos da pilha:\n");
    while (topo != NULL) {
        printf("%d\n", topo->dado);
        topo = topo->prox;
    }
}



// Função para liberar toda a memória da pilha
void liberarPilha(No **topo) {
    No *temp;
    while (*topo != NULL) {
        temp = *topo;
        *topo = temp->prox;
        free(temp);
    }
    printf("Memória da pilha liberada com sucesso.\n");
}


// Função principal
int main()
{
    setlocale(LC_ALL,"Portuguese");

    No *topo = NULL;
    int opcao, valor;

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Empilhar\n");
        printf("2 - Desempilhar\n");
        printf("3 - Consultar topo\n");
        printf("4 - Exibir pilha\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor: ");
                scanf("%d", &valor);
                push(&topo, valor);
                break;

            case 2:
                valor = pop(&topo);
                if (valor != -1)
                    printf("Elemento removido: %d\n", valor);
                break;

            case 3:
                valor = peek(topo);
                if (valor != -1)
                    printf("Topo da pilha: %d\n", valor);
                break;

            case 4:
                exibir(topo);
                break;

            case 0:
                liberarPilha(&topo);
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida!\n");
        }

    } while (opcao != 0);

    return 0;
}
