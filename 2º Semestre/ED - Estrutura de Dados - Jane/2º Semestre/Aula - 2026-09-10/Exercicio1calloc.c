#include<stdio.h>
#include<stdlib.h> //calloc
#include<windows.h>//biblioteca magica para acentos

//usando a ideia de PILHA - inicio é o prato de cima

typedef struct Pessoa
{
    char nome[50];
    int idade;
    char endereco[100];
    struct Pessoa *ptrProximo;
}Pessoa;

int main()
{
    char opcao;
    SetConsoleOutputCP(65001);//acento no terminal - windows

    Pessoa *inicio = NULL //começando como vazio ainda

    do
    {
        Pessoa *novo = (Pessoa*) calloc(1,syzeof(Pessoa));
        printf("Digite seu nome: ");
        fgets(p1.nome, sizeof(p1.nome), stdin);
    
        printf("Digite sua idade: ");
        scanf("%d%*c", &p1.idade);
    
        printf("Digite seu endereco: ");
        fgets(p1.endereco, sizeof(p1.endereco), stdin);

        //inserir no inicio 
        novo->ptrProximo = inicio;
        inicio = novo; 

        printf("Cadastrar outra pessoa? (s/n): ");
        scanf("%c%*c" &opcao);
        

    } while (opcao == "s" || opcao == "S");
    


    //mostrando dados
    Pessoa *aux = inicio;
    printf("\n=== DADOS CADASTRADOS ===\n");

    while (aux != NULL)
    {
        printf("Nome: %s", aux->nome);
        printf("Idade: %d anos\n", aux->idade);
        printf("Endereço: %s", aux->endereco);
        aux = aux->ptrProximo;//pula para o proximo
    }
    
    


    return 0;
}