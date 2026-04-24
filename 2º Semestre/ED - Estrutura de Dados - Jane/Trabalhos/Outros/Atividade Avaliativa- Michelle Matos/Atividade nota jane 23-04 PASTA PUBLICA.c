#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
} Medicamento;

void cadastrar(Medicamento *vetor, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nMedicamento %d\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &vetor[i].codigo);

        printf("Nome: ");
        scanf(" %[^\n]", vetor[i].nome);

        printf("Quantidade: ");
        scanf("%d", &vetor[i].quantidade);

        printf("Preco: ");
        scanf("%f", &vetor[i].preco);
    }
}

void listar(Medicamento *vetor, int n) {
    printf("\n=== LISTA DE MEDICAMENTOS ===\n");

    for (int i = 0; i < n; i++) {
        printf("\nCodigo: %d\n", vetor[i].codigo);
        printf("Nome: %s\n", vetor[i].nome);
        printf("Quantidade: %d\n", vetor[i].quantidade);
        printf("Preco: R$ %.2f\n", vetor[i].preco);
    }
}

void buscar(Medicamento *vetor, int n) {
    int codigo, encontrado = 0;

    printf("\nDigite o codigo para buscar: ");
    scanf("%d", &codigo);

    for (int i = 0; i < n; i++) {
        if (vetor[i].codigo == codigo) {
            printf("\nMedicamento encontrado:\n");
            printf("Nome: %s\n", vetor[i].nome);
            printf("Quantidade: %d\n", vetor[i].quantidade);
            printf("Preco: R$ %.2f\n", vetor[i].preco);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("\nMedicamento nao encontrado!\n");
    }
}

int main() {
    Medicamento *estoque;
    int n, opcao;

    printf("Quantidade de medicamentos: ");
    scanf("%d", &n);

    estoque = (Medicamento *) malloc(n * sizeof(Medicamento));

    if (estoque == NULL) {
        printf("Erro de memoria!\n");
        return 1;
    }

    do {
        printf("\n=== MENU ===\n");
        printf("1 - Cadastrar medicamentos\n");
        printf("2 - Listar medicamentos\n");
        printf("3 - Buscar medicamento\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
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

            case 0:
                printf("Encerrando...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    free(estoque);

    return 0;
}
