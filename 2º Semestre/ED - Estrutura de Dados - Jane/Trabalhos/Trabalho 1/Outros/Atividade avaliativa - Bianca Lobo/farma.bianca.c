#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
} Medicamento;


void cadastrar(Medicamento *m, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nCadastro do medicamento %d\n", i + 1);

        printf("Código: ");
        scanf("%d", &m[i].codigo);

        printf("Nome: ");
        scanf(" %[^\n]", m[i].nome);

        printf("Quantidade: ");
        scanf("%d", &m[i].quantidade);

        printf("Preço: ");
        scanf("%f", &m[i].preco);
    }
}


void listar(Medicamento *m, int n) {
    printf("\n=== Lista de Medicamentos ===\n");

    for (int i = 0; i < n; i++) {
        printf("\nMedicamento %d\n", i + 1);
        printf("Código: %d\n", m[i].codigo);
        printf("Nome: %s\n", m[i].nome);
        printf("Quantidade: %d\n", m[i].quantidade);
        printf("Preço: R$ %.2f\n", m[i].preco);
    }
}


void buscar(Medicamento *m, int n) {
    int codigo;
    printf("\nDigite o código do medicamento: ");
    scanf("%d", &codigo);

    for (int i = 0; i < n; i++) {
        if (m[i].codigo == codigo) {
            printf("\nMedicamento encontrado!\n");
            printf("Nome: %s\n", m[i].nome);
            printf("Quantidade: %d\n", m[i].quantidade);
            printf("Preço: R$ %.2f\n", m[i].preco);
            return;
        }
    }

    printf("\nMedicamento não encontrado.\n");
}


int main() {
    int n, opcao;
    Medicamento *estoque = NULL;

    printf("Quantos medicamentos deseja cadastrar? ");
    scanf("%d", &n);


    estoque = (Medicamento *) malloc(n * sizeof(Medicamento));

    if (estoque == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Cadastrar medicamentos\n");
        printf("2 - Listar medicamentos\n");
        printf("3 - Buscar medicamento por código\n");
        printf("4 - Sair\n");
        printf("Escolha: ");
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
                printf("Encerrando...\n");
                break;

            default:
                printf("Opção inválida!\n");
        }

    } while (opcao != 4);


    free(estoque);

    return 0;
}
