#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    char nome[70];
    int quantidade;
    float preco;
} Medicamento;

void cadastrar(Medicamento *m, int n) {

    for (int i = 0; i < n; i++) {
        printf("\nMedicamento %d\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &m[i].codigo);

        printf("Nome: ");
        scanf(" %[^\n]", m[i].nome);

        printf("Quantidade: ");
        scanf("%d", &m[i].quantidade);

        printf("Preco: ");
        scanf("%f", &m[i].preco);
    }
}

void listar(Medicamento *m, int n) {

    printf("\nLISTA\n");

    for (int i = 0; i < n; i++) {
        printf("\nCodigo: %d", m[i].codigo);
        printf("\nNome: %s", m[i].nome);
        printf("\nQuantidade: %d", m[i].quantidade);
        printf("\nPreco: %.2f\n", m[i].preco);
    }
}

void buscar(Medicamento *m, int n) {

    int cod, achou = 0;

    printf("Digite o codigo: ");
    scanf("%d", &cod);

    for (int i = 0; i < n; i++) {
        if (m[i].codigo == cod) {
            printf("\nNome: %s", m[i].nome);
            printf("\nQuantidade: %d", m[i].quantidade);
            printf("\nPreco: %.2f\n", m[i].preco);
            achou = 1;
        }
    }

    if (!achou) {
        printf("Medicamento nao encontrado.\n");
    }
}

int main() {

    int n, opcao;

    Medicamento *estoque;

    printf("Quantidade de medicamentos: ");
    scanf("%d", &n);

    estoque = (Medicamento *) malloc(n * sizeof(Medicamento));

    do {
        printf("\n\n1 - Cadastrar");
        printf("\n2 - Listar");
        printf("\n3 - Buscar");
        printf("\n4 - Sair");
        printf("\nOpcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar(estoque, n);
                break;
            case 2:
                listar(estoque, n);
                break;
            case 3:
                buscar(estoque, n);
                break;
            case 4:
                break;
            default:
                printf("Opcao invalida.\n");
        }

    } while (opcao != 4);

    free(estoque);

    return 0;
}
