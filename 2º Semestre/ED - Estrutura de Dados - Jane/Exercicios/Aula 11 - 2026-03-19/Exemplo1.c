#include<stdio.h>
#include<locale.h>


//criçação da estrutura autoreferenciada

struct Reg_contas
{
    int num;
    char nome[20];
    float saldo;
    struct Reg_contas *ptr;
};

struct funcionario2
{
    char sobrenome[20];
    int idade;
    char sexo;
    double salario;
    struct funcionario2 *ePtr;
};
