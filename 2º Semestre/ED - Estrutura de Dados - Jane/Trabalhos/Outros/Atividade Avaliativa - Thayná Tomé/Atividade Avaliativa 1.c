#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
} Medicamento;


void cadastrarMedicamentos(Medicamento *estoque, int qtd);
void listarMedicamentos(Medicamento *estoque, int qtd);
void buscarMedicamento(Medicamento *estoque, int qtd);
void limparBuffer();

int main() {
    int opcao, qtdCadastrada = 0;
    Medicamento *estoque = NULL;

    do {
        printf("\n--- SISTEMA DE CONTROLE DE ESTOQUE (FARMACIA) ---\n");
        printf("1 - Cadastrar medicamentos\n");
        printf("2 - Listar medicamentos\n");
        printf("3 - Buscar medicamento por codigo\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (estoque != NULL) {
                    free(estoque);
                }
                printf("Quantos medicamentos deseja cadastrar? ");
                scanf("%d", &qtdCadastrada);


                estoque = (Medicamento *) malloc(qtdCadastrada * sizeof(Medicamento));

                if (estoque == NULL) {
                    printf("Erro de memoria!\n");
                    exit(1);
                }

                cadastrarMedicamentos(estoque, qtdCadastrada);
                break;

            case 2:
                if (estoque == NULL) {
                    printf("\nEstoque vazio. Cadastre medicamentos primeiro.\n");
                } else {
                    listarMedicamentos(estoque, qtdCadastrada);
                }
                break;

            case 3:
                if (estoque == NULL) {
                    printf("\nEstoque vazio. Nao ha o que buscar.\n");
                } else {
                    buscarMedicamento(estoque, qtdCadastrada);
                }
                break;

            case 4:
                printf("Encerrando sistema...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 4);


    if (estoque != NULL) {
        free(estoque);
    }

    return 0;
}


void cadastrarMedicamentos(Medicamento *estoque, int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("\n--- Cadastro do %do Medicamento ---\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &(estoque + i)->codigo);

        limparBuffer();
        printf("Nome: ");
        fgets((estoque + i)->nome, 50, stdin);
        (estoque + i)->nome[strcspn((estoque + i)->nome, "\n")] = 0;

        printf("Quantidade em estoque: ");
        scanf("%d", &(estoque + i)->quantidade);

        printf("Preco unitario: R$ ");
        scanf("%f", &(estoque + i)->preco);
    }
    printf("\nCadastro realizado com sucesso!\n");
}

void listarMedicamentos(Medicamento *estoque, int qtd) {
    printf("\n%-10s %-20s %-10s %-10s\n", "CODIGO", "NOME", "QTD", "PRECO");
    printf("----------------------------------------------------------\n");
    for (int i = 0; i < qtd; i++) {
        printf("%-10d %-20s %-10d R$ %-10.2f\n",
                (estoque + i)->codigo,
                (estoque + i)->nome,
                (estoque + i)->quantidade,
                (estoque + i)->preco);
    }
}

void buscarMedicamento(Medicamento *estoque, int qtd) {
    int codBusca, encontrado = 0;
    printf("\nDigite o codigo do medicamento: ");
    scanf("%d", &codBusca);

    for (int i = 0; i < qtd; i++) {
        if ((estoque + i)->codigo == codBusca) {
            printf("\nMedicamento Encontrado:\n");
            printf("Nome: %s | Estoque: %d | Preco: R$ %.2f\n",
                    (estoque + i)->nome,
                    (estoque + i)->quantidade,
                    (estoque + i)->preco);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("\nMedicamento com codigo %d nao encontrado.\n", codBusca);
    }
}

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
