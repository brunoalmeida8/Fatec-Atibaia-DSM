#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    char descricao[50];
    float preco;
} Produto;

int main()
{
    int qtd;
    float soma = 0, media;

    printf("Digite a quantidade de produtos: ");
    scanf("%d", &qtd);

    Produto *produtos = (Produto *) malloc(qtd * sizeof(Produto));

    if (produtos == NULL)
    {
        printf("Erro na alocacao de memoria.\n");
        return 1;
    }

    for (int i = 0; i < qtd; i++)
    {
        printf("\nProduto %d\n", i + 1);

        printf("Codigo: ");
        scanf("%d%*c", &produtos[i].codigo);

        printf("Descricao: ");
        scanf("%s%*c", &produtos[i].descricao);

        printf("Preco: ");
        scanf("%f%*c", &produtos[i].preco);

        soma += produtos[i].preco;
    }

    printf("\n=== PRODUTOS CADASTRADOS ===\n");

    for (int i = 0; i < qtd; i++)
    {
        printf("\nProduto %d\n", i + 1);
        printf("Codigo: %d\n", produtos[i].codigo);
        printf("Descricao: %s\n", produtos[i].descricao);
        printf("Preco: R$ %.2f\n", produtos[i].preco);
    }

    media = soma / qtd;

    printf("\nMedia dos precos: R$ %.2f\n", media);

    free(produtos);

    return 0;
}
