#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NOME_MAX 100

typedef struct {
    int codigo;
    char nome[NOME_MAX];
    int quantidade;
    float preco_unitario;
} Medicamento;

static void limpar_buffer_entrada(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {

    }
}

static void ler_linha(char *dest, size_t tam) {
    if (fgets(dest, (int)tam, stdin) == NULL) {
        dest[0] = '\0';
        return;
    }
    dest[strcspn(dest, "\n")] = '\0';
}

static void cadastrar_medicamentos(Medicamento **estoque, int *capacidade, int *quantidade_cadastrada) {
    int n = 0;

    if (*estoque != NULL) {
        free(*estoque);
        *estoque = NULL;
        *capacidade = 0;
        *quantidade_cadastrada = 0;
    }

    printf("Quantos medicamentos deseja cadastrar? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Quantidade invalida.\n");
        limpar_buffer_entrada();
        return;
    }
    limpar_buffer_entrada();

    Medicamento *vetor = (Medicamento *)calloc((size_t)n, sizeof(Medicamento));
    if (!vetor) {
        printf("Falha ao alocar memoria.\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        Medicamento *m = vetor + i;

        printf("\n=== Medicamento %d/%d ===\n", i + 1, n);

        printf("Codigo: ");
        while (scanf("%d", &m->codigo) != 1) {
            printf("Entrada invalida. Digite o codigo: ");
            limpar_buffer_entrada();
        }
        limpar_buffer_entrada();

        printf("Nome: ");
        ler_linha(m->nome, sizeof(m->nome));
        while (m->nome[0] == '\0') {
            printf("Nome nao pode ser vazio. Nome: ");
            ler_linha(m->nome, sizeof(m->nome));
        }

        printf("Quantidade em estoque: ");
        while (scanf("%d", &m->quantidade) != 1) {
            printf("Entrada invalida. Digite a quantidade em estoque: ");
            limpar_buffer_entrada();
        }
        limpar_buffer_entrada();

        printf("Preco unitario: ");
        while (scanf("%f", &m->preco_unitario) != 1) {
            printf("Entrada invalida. Digite o preco: ");
            limpar_buffer_entrada();
        }
        limpar_buffer_entrada();
    }

    *estoque = vetor;
    *capacidade = n;
    *quantidade_cadastrada = n;
    printf("\nCadastro concluido.\n");
}

static void listar_medicamentos(const Medicamento *estoque, int quantidade_cadastrada) {
    if (estoque == NULL || quantidade_cadastrada <= 0) {
        printf("Nenhum medicamento cadastrado.\n");
        return;
    }

    printf("\n=== LISTA DE MEDICAMENTOS (%d) ===\n", quantidade_cadastrada);
    for (int i = 0; i < quantidade_cadastrada; i++) {
        const Medicamento *m = estoque + i;
        printf("\nMedicamento %d\n", i + 1);
        printf("Codigo: %d\n", m->codigo);
        printf("Nome: %s\n", m->nome);
        printf("Quantidade: %d\n", m->quantidade);
        printf("Preco unitario: R$ %.2f\n", m->preco_unitario);
    }
}

static const Medicamento *buscar_por_codigo(const Medicamento *estoque, int quantidade_cadastrada, int codigo) {
    if (estoque == NULL || quantidade_cadastrada <= 0) {
        return NULL;
    }
    for (int i = 0; i < quantidade_cadastrada; i++) {
        const Medicamento *m = estoque + i;
        if (m->codigo == codigo) {
            return m;
        }
    }
    return NULL;
}

static void menu(void) {
    printf("\n===== MENU =====\n");
    printf("1 - Cadastrar medicamentos\n");
    printf("2 - Listar medicamentos\n");
    printf("3 - Buscar medicamento por codigo\n");
    printf("4 - Sair\n");
    printf("Escolha uma opcao: ");
}

int main(void) {
    Medicamento *estoque = NULL;
    int capacidade = 0;
    int quantidade_cadastrada = 0;

    int opcao = 0;
    do {
        menu();
        if (scanf("%d", &opcao) != 1) {
            printf("Opcao invalida.\n");
            limpar_buffer_entrada();
            continue;
        }
        limpar_buffer_entrada();

        if (opcao == 1) {
            cadastrar_medicamentos(&estoque, &capacidade, &quantidade_cadastrada);
        } else if (opcao == 2) {
            listar_medicamentos(estoque, quantidade_cadastrada);
        } else if (opcao == 3) {
            int codigo = 0;
            printf("Digite o codigo para buscar: ");
            if (scanf("%d", &codigo) != 1) {
                printf("Codigo invalido.\n");
                limpar_buffer_entrada();
                continue;
            }
            limpar_buffer_entrada();

            const Medicamento *m = buscar_por_codigo(estoque, quantidade_cadastrada, codigo);
            if (!m) {
                printf("Medicamento com codigo %d nao encontrado.\n", codigo);
            } else {
                printf("\n=== ENCONTRADO ===\n");
                printf("Codigo: %d\n", m->codigo);
                printf("Nome: %s\n", m->nome);
                printf("Quantidade: %d\n", m->quantidade);
                printf("Preco unitario: R$ %.2f\n", m->preco_unitario);
            }
        } else if (opcao == 4) {

        } else {
            printf("Opcao inexistente.\n");
        }
    } while (opcao != 4);

    free(estoque);
    estoque = NULL;
    capacidade = 0;
    quantidade_cadastrada = 0;

    printf("Encerrando...\n");
    return 0;
}
