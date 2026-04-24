#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
    int codigo;
    char nome[100];
    int quantidade;
    float preco;
} Medicamento;

void cadastrar(Medicamento *m, int n) {
    for (int i = 0; i < n; i++) {
        printf("\n--- Cadastro do medicamento %d ---\n", i + 1);

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
    printf("\n--- Lista de Medicamentos ---\n");

    for (int i = 0; i < n; i++) {
        printf("\nCódigo: %d\n", m[i].codigo);
        printf("Nome: %s\n", m[i].nome);
        printf("Quantidade: %d\n", m[i].quantidade);
        printf("Preço: %.2f\n", m[i].preco);
    }
}

void buscar(Medicamento *m, int n) {
    int codigo;
    int encontrado = 0;

    printf("Digite o código do medicamento: ");
    scanf("%d", &codigo);

    for (int i = 0; i < n; i++) {
        if (m[i].codigo == codigo) {
            printf("\nMedicamento encontrado:\n");
            printf("Nome: %s\n", m[i].nome);
            printf("Quantidade: %d\n", m[i].quantidade);
            printf("Preço: %.2f\n", m[i].preco);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Medicamento não encontrado.\n");
    }
}

int main() {
    setlocale(LC_ALL,"portuguese");

    int n;
    int opcao;

    printf("Quantidade de medicamentos: ");
    scanf("%d", &n);

    Medicamento *medicamentos;
    medicamentos = (Medicamento *) malloc(n * sizeof(Medicamento));

    if (medicamentos == NULL) {
        printf("Erro de alocaçao de memória.\n");
        return 1;
    }

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Cadastrar medicamentos\n");
        printf("2 - Listar medicamentos\n");
        printf("3 - Buscar medicamento por código\n");
        printf("4 - Sair\n");
        printf("Opçao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar(medicamentos, n);
                break;

            case 2:
                listar(medicamentos, n);
                break;

            case 3:
                buscar(medicamentos, n);
                break;

            case 4:
                printf("Encerrando...\n");
                break;

            default:
                printf("Opçao invalida.\n");
        }

    } while (opcao != 4);

    free(medicamentos);

    return 0;
}
