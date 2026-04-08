#include <stdio.h>
#include <locale.h>

//Definindo novo tipo de dado
//Registro chamado Reg_contas
typedef struct Reg_contas
{
    int num;
    char nome[20];
    float saldo;
}contas;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i;

    contas conta[5];  //Criação da variável do novo tipo criado
    contas *ptr  = conta;

    for (i=0;i<5;i++)
    {
        printf("\nDigite o código: ");
        scanf("%d%*c",&ptr[i].num);

        printf("\nDigite o nome: ");
        gets(ptr[i].nome);

        printf("\nDigite o saldo: ");
        scanf("%f%*c",&ptr[i].saldo);
    }

    for (i=0;i<5;i++)
    {
        printf("\nNome: %s\t Saldo: %.2f ",
               conta[i].nome,conta[i].saldo);
    }

}
