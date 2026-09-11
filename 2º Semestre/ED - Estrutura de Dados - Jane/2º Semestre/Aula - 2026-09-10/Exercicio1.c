#include<stdio.h>
#include<windows.h>//biblioteca magica para acentos

typedef struct Pessoa
{
    char nome[50];
    int idade;
    char endereco[100];
}Pessoa;

int main()
{
    SetConsoleOutputCP(65001);//acento no terminal - windows

    Pessoa p1;

    printf("Digite seu nome: ");
    fgets(p1.nome, sizeof(p1.nome), stdin);

    printf("Digite sua idade: ");
    scanf("%d%*c", &p1.idade);

    printf("Digite seu endereco: ");
    fgets(p1.endereco, sizeof(p1.endereco), stdin);

    //mostrando dados
    printf("\n=== DADOS CADASTRADOS ===\n");
    printf("Nome: %s", p1.nome);
    printf("Idade: %d anos\n", p1.idade);
    printf("Endereço: %s", p1.endereco);


    return 0;
}