#include<stdio.h>
#include<stdlib.h>

typedef struct fichaProduto
{
    int codigo;
    float preco;
    int quantidade;
    struct fichaProduto *proxNo;
}fichaProduto;

void inserirFim(fichaProduto **produto, int cod, float preco, int qtd)
{
    fichaProduto *prodInicio=NULL, *prodAux = NULL;
    fichaProduto *prodNovo = (fichaProduto*) malloc(sizeof(fichaProduto));
    if (prodNovo == NULL)
    {
        printf("Erro ao alocar memoria\n");
        return;
    }
        prodNovo->codigo = cod;
        prodNovo->preco = preco;
        prodNovo->quantidade = qtd;
        prodNovo->proxNo = NULL;

    if (*produto == NULL)//se for NULL ainda é o primeiro cadastro
    {
        *produto = prodNovo;//cadastra o novo la no produto da main
    } else//ja tem algo cadastrado em produto la da main
    {
        prodAux =  *produto;//o aux recebe o primeiro item da lista
        while (prodAux->proxNo != NULL)//enquanto o proxNo nao apontar para NULL
        {
            prodAux = prodAux->proxNo;//o auxiliar anda para o proxNo até ser o ultimo
        }
        //quando o prodAux->proxNo for o ultimo ai a gente aponta ele para o novo
        prodAux->proxNo = prodNovo;//a casinha antiga aponta para o novo
        
    }


    
    
}

int main()
{
    fichaProduto *produto = NULL;


    inserirFim(&produto, 01, 10.99, 5);
    inserirFim(&produto, 02, 50.00, 12);
    inserirFim(&produto, 03, 200, 3);
    
    if (produto == NULL)
    {
        printf("Deu erro ao alocar la na função\n");
    }
    



    //exibir lista
    printf("\n\n=====Exibir Produtos=====\n\n");
    while (produto != NULL)
    {
        printf("Codigo: %d\n", produto->codigo);
        printf("Preco: %.2f\n", produto->preco);
        printf("Quantidade: %d\n\n", produto->quantidade);
        produto = produto->proxNo;       
    }

    return 0;
}