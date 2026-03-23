#include<stdio.h>
#include<locale.h>

//Definindo novo tipo de dado
//Registro chamado Reg_contas

struct Reg_contas
{
    int num;
    char nome[20];
    float saldo;
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    struct Reg_contas conta[5];

    for (i=0;i<5;i++)
    {
        printf("\nDigite o codigo: ");
        scanf("%d%*c", &conta[i].num);

        printf("\nDigite o nome: ");
        gets(conta[i].nome);

        printf("\nDigite o saldo: ");
        scanf("%f%*c", &conta[i].saldo);
    }

    for (i=0;i<5;i++)
    {
        printf("\nNome: %s\t saldo: %.2f ", conta[i].nome, conta[i].saldo);
    }

    return 0;
}
