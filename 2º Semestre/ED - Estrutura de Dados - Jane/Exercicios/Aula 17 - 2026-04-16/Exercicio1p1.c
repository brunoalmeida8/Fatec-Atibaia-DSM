#include<stdio.h>
#include<stdlib.h>

typedef struct fichaProduto
{
    int codigo;
    float preco;
    int quantidade;
    struct fichaProduto *proxNo;
}fichaProduto;



int main()
{
    fichaProduto *prodInicio, *prodAux, *prodNovo = NULL;

    //primeira vez cadastrando produto
    prodNovo = (fichaProduto*) malloc(sizeof(fichaProduto));

    //preenchendo os dados
    prodNovo->codigo = 01;
    prodNovo->preco = 12.50;
    prodNovo->quantidade = 3;
    prodNovo->proxNo = NULL;

    prodInicio = prodNovo;//primeira vez o inicio recebe o novo
    prodAux = prodNovo;//primeira vez o aux tbm recebe o novo

    //2º cadastro
    prodNovo = (fichaProduto*) malloc(sizeof(fichaProduto));

    //preenchendo  os dados
    prodNovo->codigo = 02;
    prodNovo->preco = 50;
    prodNovo->quantidade = 15;
    prodNovo->proxNo = NULL;


    prodAux->proxNo = prodNovo;//A casinha do endereço da memoria antiga aponta para o endereço da nova casinha da memoria em que esta o "novo" (lista encadeada)
    prodAux = prodNovo;//o auxiliar anda uma casa para frente

    //3º Cadastro
    prodNovo = (fichaProduto*) malloc(sizeof(fichaProduto));

    //preenchimento dos dados
    prodNovo->codigo = 03;
    prodNovo->preco = 999.99;
    prodNovo->quantidade = 5;
    prodNovo->proxNo = NULL;

    prodAux->proxNo = prodNovo;
    prodAux = prodNovo;

    //exibir lista
    prodAux = prodInicio;
    printf("\n\n=====Exibir Produtos=====\n\n");
    while (prodAux != NULL)
    {
        printf("Codigo: %d\n", prodAux->codigo);
        printf("Preco: %.2f\n", prodAux->preco);
        printf("Quantidade: %d\n\n", prodAux->quantidade);
        prodAux = prodAux->proxNo;       
    }
    
    


    //limprar lista free
    fichaProduto *aux = prodInicio;
    
    //"Guarde o próximo, apague o atual, avance o início."
    while (aux != NULL)
    {
        aux = aux->proxNo;//avança para o prox no
        free(prodInicio);//libera lista
        prodInicio = aux;//proInicio vira o no avançado antes.
    }
    
    return 0;
}