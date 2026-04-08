#include <stdio.h>
#include <locale.h>

typedef struct Aluno
{
    int matricula;
    float nota;
}Alunos;


void ImprimeAluno(Alunos *p)
{
    printf("Aluno 1: %d\n",p->matricula);
    printf("Aluno 1: %.2f\n",p->nota);
    printf("\n");
}


void Imprime(Alunos Alu)
{

    printf("Aluno 2: %d\n",Alu.matricula);
    printf("Aluno 2: %.2f\n",Alu.nota);
}


int main()
{
    Alunos alu_1 = {12345, 8.5}, alu_2, *p;

    p = &alu_1;

    alu_2.matricula = 54321;
    alu_2.nota = 9.0;

    ImprimeAluno(p);

    Imprime(alu_2);

}
