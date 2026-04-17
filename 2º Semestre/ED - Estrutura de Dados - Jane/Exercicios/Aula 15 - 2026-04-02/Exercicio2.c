#include<stdio.h>

struct fichaAluno
{
    int matricula;
    char nome[50];
    float nota[3];
};


int main()
{
    struct fichaAluno aluno;
    printf("Tamanho da struct - %d bytes", sizeof(aluno));
    return 0;
}