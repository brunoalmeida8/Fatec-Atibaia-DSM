#include <stdio.h>
#include <locale.h>

//Criação da estrutura autoreferenciada -
//uso em estruturas de dados dinamica
//Definindo novo tipo de dado - Registro chamado Reg_contas
struct Reg_contas
{
    int num;
    char nome[20];
    float saldo;
    struct Reg_contas *ptr;
};

struct funcionario2
{
    char sobrenome[ 20 ];
    int idade;
    char sexo;
    double salario;
    struct funcionario2 *ePtr;
};

