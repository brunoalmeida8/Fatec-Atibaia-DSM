#include<stdio.h>
#include<locale.h>

struct fichaLivro
{
    int cod_livro;
    char titulo[50];
    int ano_lancamento;
    int edicao;
    char autor[50];
    char editora[50];
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct fichaLivro livro[100];
    int i = 0, opcao, total = 0, escolhaCodigo, achou = 0;

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
                printf("Digite o codigo do livro: ");
                scanf("%d", &livro[i].cod_livro);
                printf("Digite o titulo do livro: ");
                scanf(" %[^\n]s", livro[i].titulo);
                printf("Digite o ano de lancamento do livro: ");
                scanf(" %d", &livro[i].ano_lancamento);
                printf("Digite a edicao do livro: ");
                scanf("%d", &livro[i].edicao);
                printf("Digite o autor do livro: ");
                scanf(" %[^\n]s", livro[i].autor);
                printf("Digite a editora do livro: ");
                scanf(" %[^\n]s", livro[i].editora);
                i = i + 1;
                total = total + 1;
                break;
            
            case 2:
                printf("Digite o cogido do livro para buscar: ");
                scanf("%d", &escolhaCodigo);// variavel para defenir qual livro vai buscar
                for (int i = 0; i < total; i++)
                {
                    if (escolhaCodigo == livro[i].cod_livro)
                    {
                        printf("O Codigo do livro e: %d", livro[i].cod_livro);
                        achou = 1; //verifica se encontrou esse codigo (1-vdd, 0-falso)
                    }
                }
                if (achou == 0)
                {
                    printf("O codigo digitado nao esta cadastrado");
                }
                break;
            
            case 4:
                printf("\n\nLista completa dos livros\n\n");
                for (int i = 0; i < total; i++)
                {
                printf("\nLivro %d", i+1);
                printf("\nCodigo do livro: %d", livro[i].cod_livro);
                printf("\nTitulo do livro: %s", livro[i].titulo);
                printf("\nAno de lancamento do livro: %d", livro[i].ano_lancamento);
                printf("\nEdicao do livro: %d", livro[i].edicao);
                printf("\nAutor do livro: %s", livro[i].autor);
                printf("\nEditora do livro: %s", livro[i].editora);
                }
                break;
                

            
            default:
                printf("Selecione uma opção valida de 1 a 5");
                break;
        }
        
    } while (opcao != 5);
    



    return 0;
}
