#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
    int topo;
    int capacidade;
    int *dados;
} Pilha;

// Inicializa a pilha com capacidade definida
Pilha* criarPilha(int capacidade) {
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    if (!p) {
        printf("Erro ao alocar memória para a pilha!\n");
        exit(1);
    }
    p->topo = -1;
    p->capacidade = capacidade;
    p->dados = (int*) malloc(capacidade * sizeof(int));
    if (!p->dados) {
        printf("Erro ao alocar memória para os dados!\n");
        free(p);
        exit(1);
    }
    return p;
}

// Verifica se está vazia
int estaVazia(Pilha *p) {
    return p->topo == -1;
}

// Verifica se está cheia
int estaCheia(Pilha *p) {
    return p->topo == p->capacidade - 1;
}

// Empilha
void push(Pilha *p, int valor) {
    if (estaCheia(p)) {
        printf("Erro: Pilha cheia!\n");
        return;
    }
    p->dados[++p->topo] = valor;
    printf("Elemento %d empilhado.\n", valor);
}

// Desempilha
int pop(Pilha *p) {
    if (estaVazia(p)) {
        printf("Erro: Pilha vazia!\n");
        return -1;
    }
    return p->dados[p->topo--];
}

// Consulta topo
int peek(Pilha *p) {
    if (estaVazia(p)) {
        printf("Erro: Pilha vazia!\n");
        return -1;
    }
    return p->dados[p->topo];
}

// Exibe elementos
void exibir(Pilha *p) {
    if (estaVazia(p)) {
        printf("Pilha vazia!\n");
        return;
    }
    printf("Elementos da pilha:\n");
    for (int i = p->topo; i >= 0; i--) {
        printf("%d\n", p->dados[i]);
    }
}

// Libera memória
void liberar(Pilha *p) {
    free(p->dados);
    free(p);
}

int main()
{
    setlocale(LC_ALL,"portuguese");
    int capacidade;
    printf("Digite a capacidade da pilha: ");
    scanf("%d", &capacidade);

    Pilha *p = criarPilha(capacidade);

    int opcao, valor;
    do {
        printf("\n--- MENU ---\n");
        printf("1. Empilhar\n");
        printf("2. Desempilhar\n");
        printf("3. Consultar topo\n");
        printf("4. Exibir pilha\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor: ");
                scanf("%d", &valor);
                push(p, valor);
                break;
            case 2:
                valor = pop(p);
                if (valor != -1)
                    printf("Elemento desempilhado: %d\n", valor);
                break;
            case 3:
                valor = peek(p);
                if (valor != -1)
                    printf("Topo da pilha: %d\n", valor);
                break;
            case 4:
                exibir(p);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    liberar(p);
    return 0;
}
