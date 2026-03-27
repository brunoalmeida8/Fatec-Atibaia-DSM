#include<stdio.h>
#include<locale.h>

struct fichaLivro
{
    int cod_livro;
    char titulo[50];
    char ano_lancamento[4];
    int edicao;
    char autor[50];
    char editora[50];
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct fichaLivro livro[100];
    int i = 0, opcao;

    do
    {
        printf("\n\nMenu de opções\n\n");
        printf("\n1 - Inserir");
        printf("\n2 - Consultar por codigo");
        printf("\n3 - Consultar por titulo");
        printf("\n4 - Imprimir lista completa");
        printf("\n5 - Sair\n\n");
        scanf("%d", &opcao);


        switch (opcao)
        {
        case 1:
            printf("\n\nInsira o livro\n\n");
            printf("\nDigite o codigo do livro: ");
            scanf("%d", &livro[i].cod_livro);
            printf("\nDigite o titulo do livro: ");
            scanf(" %[^\n]s", livro[i].titulo);
            printf("\nDigite o ano de lancamento do livro: ");
            scanf("%s", livro[i].ano_lancamento);
            printf("\nDigite a edicao do livro: ");
            scanf("%d", &livro[i].edicao);
            printf("\nDigite o autor do livro: ");
            scanf("%s", livro[i].autor);
            printf("\nDigite a editora do livro: ");
            scanf("%s", livro[i].editora);
            i = i + 1;
            break;
        
        default:
            break;
        }
        
    } while (opcao != 5);
    



    return 0;
}
