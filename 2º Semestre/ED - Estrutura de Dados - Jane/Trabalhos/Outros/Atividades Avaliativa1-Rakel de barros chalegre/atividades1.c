#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
 {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
} Medicamento;

void cadastrar(Medicamento *m, int n)
{
    int i;
    for(i = 0; i < n; i++) {
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


void listar(Medicamento *m, int n)
{
    int i;

    printf("\n--- LISTA DE MEDICAMENTOS ---\n");
    for(i = 0; i < n; i++) {
        printf("\nCodigo: %d", m[i].codigo);
        printf("\nNome: %s", m[i].nome);
        printf("\nQuantidade: %d", m[i].quantidade);
        printf("\nPreco: %.2f\n", m[i].preco);
    }
}


void buscar(Medicamento *m, int n)
 {
    int cod, i, encontrado = 0;

    printf("\nDigite o codigo: ");
    scanf("%d", &cod);

    for(i = 0; i < n; i++) {
        if(m[i].codigo == cod) {
            printf("\n--- MEDICAMENTO ENCONTRADO ---\n");
            printf("Nome: %s\n", m[i].nome);
            printf("Quantidade: %d\n", m[i].quantidade);
            printf("Preco: %.2f\n", m[i].preco);
            encontrado = 1;
        }
    }

    if(encontrado == 0) {
        printf("\nMedicamento nao encontrado!\n");
    }
}

int main() {
    Medicamento *estoque;
    int n, opcao;

    printf("Quantidade de medicamentos: ");
    scanf("%d", &n);


    estoque = (Medicamento*) malloc(n * sizeof(Medicamento));

    if(estoque == NULL)
        {
        printf("Erro de memoria!\n");
        return 1;
    }

    do {
        printf("\n\n--- MENU ---\n");
        printf("1 - Cadastrar medicamentos\n");
        printf("2 - Listar medicamentos\n");
        printf("3 - Buscar medicamento por codigo\n");
        printf("4 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao)
         {
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
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }

    } while(opcao != 4);

    free(estoque);

    return 0;
}
