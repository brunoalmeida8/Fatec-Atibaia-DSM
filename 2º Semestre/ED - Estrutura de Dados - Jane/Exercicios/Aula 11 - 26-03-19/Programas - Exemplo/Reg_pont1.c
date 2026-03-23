#include <stdio.h>
#include <locale.h>


typedef struct Aluno
{
    int matricula;
    float nota;
}Alunos;

int main()
{
    Alunos alu_1 = {12345, 8.5}, alu_2, *p;

    p = &alu_1;
    printf("Aluno 1: %d\n",p->matricula);
    printf("Aluno 1: %.2f\n",p->nota);
    printf("\n");

    alu_2.matricula = 54321;
    alu_2.nota = 9.0;
    printf("Aluno 2: %d\n",alu_2.matricula);
    printf("Aluno 2: %.2f\n",alu_2.nota);

}
