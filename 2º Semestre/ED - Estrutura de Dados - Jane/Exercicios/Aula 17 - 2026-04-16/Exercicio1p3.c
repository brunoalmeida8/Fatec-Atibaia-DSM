#include<stdio.h>
#include<stdlib.h>

typedef struct fichaProduto
{
    int codigo;
    float preco;
    int quantidade;
    struct fichaProduto *proxNo;
}fichaProduto;

//camada de logica
void inserirFim(fichaProduto **produto, int cod, float preco, int qtd)
{
    fichaProduto *prodAux;
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
    
    //se tiver vazio é o primeiro cadastro
    if (*produto == NULL) 
    {
        *produto = prodNovo;//simplesmente recebe o novo cadastro
        return;//e ja volta para main
    }
    
    prodAux = *produto;//recebe o primeiro da lista
    
    while (prodAux->proxNo != NULL)//enquanto o proxNo nao apontar para NULL
    {
        prodAux = prodAux->proxNo; //faz prodAux andar para proximo endereço
    }
    //dai quando chegar no final (ou seja proxNo aponta para NULL) significa que proxNo é o ultimo linkado, até o momento.
    //sendo assim a gente precisa linkar esse ultimo cadastrado com o ProdNovo que a gente acabou de cadastrar...
    //note que aqui os dois tem proxNo apontando para null
    //prodAux.proxNo = NULL     o ultimo da lista antiga tava apontando para NULL
    //prodNovo.proxNo = NULL    o novo q acabamos de cadastrar aponta para NULL tbm
    prodAux->proxNo = prodNovo;//o ultimo da lista antiga aponta para o novo e nao mais para NULL, pois agora o ultimo da lista tem que ser o novo.
}

//camada de interface
void solicitarCadastro (fichaProduto **produto)
{
    int cod, qtd;
    float preco;
    for (int i = 0; i < 5; i++)
    {
        printf("\n\n=====Produto %d=====\n", i + 1);
        printf("Digite o codigo: ");
        scanf("%d", &cod);
        printf("Digite o preco: ");
        scanf("%f", &preco);
        printf("Digite a quantidade: ");
        scanf("%d", &qtd);
        inserirFim(produto, cod, preco, qtd);
    }
}

void exibirRelatorio (fichaProduto *produto)
{
    int cont = 0;
    
    printf("\n\n=====Exibir Relatorio=====\n\n");
    while (produto != NULL)
    {
        printf("Codigo: %d\n", produto->codigo);
        printf("Preco: %.2f\n", produto->preco);
        printf("Quantidade: %d\n\n", produto->quantidade);
        if (produto->quantidade > 500) cont++;//conta quantos tem mais de 500
        produto = produto->proxNo;    
    }
    printf("\n%d produtos com mais de 500 unidades\n", cont);
}

void aplicarDesconto(fichaProduto **produto)
{
    float taxa;
    fichaProduto *prodAux = *produto;

    printf("Digite a taxa de desconto: ");
    scanf("%f", &taxa);
    

    while (prodAux != NULL)
    {
        prodAux->preco = prodAux->preco * (1 - (taxa/100));//muda o preco com desconto
        prodAux = prodAux->proxNo;//avança para o proximo espaço da memoria
    }
    
}

void liberarMemoria (fichaProduto **produto)
{
    fichaProduto *prodAux;
    while (*produto != NULL)
    {
        prodAux = *produto;
        *produto = (*produto)->proxNo;
        free(prodAux);
    }
    
}


int main ()
{
    fichaProduto *produto = NULL;
    solicitarCadastro(&produto);//solicita cod, preco e quantidade de cada prooduto
    system("cls");

    exibirRelatorio(produto);//mostra o resultado original
    
    aplicarDesconto(&produto);//calcula os descontos
    system("cls");
    
    exibirRelatorio(produto);//mostra o resultado com os descontos

    liberarMemoria(&produto);//libera a memoria com o free()

    return 0;
}