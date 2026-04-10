#include<stdio.h>

struct fichaAluno
{
    int matricula;
    char nome[50];
    float notaFinal;
};


int main()
{
    struct fichaAluno aluno;

    printf("\n\nDigite sua Matricula: ");
    scanf("%d%*c", &aluno.matricula);
    printf("\nDigite seu Nome: ");
    gets(aluno.nome);
    printf("\nDigite sua Nota Final: ");
    scanf("%f%*c", &aluno.notaFinal);

    printf("\n\n===========================================");
    printf("\nExibindo dados do aluno\n");
    printf("===========================================\n\n");
    printf("\nMatricula: %d", aluno.matricula);
    printf("\nNome: %s", aluno.nome);
    printf("\nNota Final: %.2f", aluno.notaFinal);

    return 0;
}