#include <stdio.h>
#include <locale.h>

typedef struct
{
    int dia, mes, ano;
} Data;


typedef struct Aluno
{
    int matricula;
    float nota;
    Data nascimento;
}Alunos;

int main()
{
    Alunos alu_1;

    alu_1.matricula = 54321;
    alu_1.nota = 9.0;
    alu_1.nascimento.dia = 19;

    printf("Aluno 1: %d\n",alu_1.matricula);
    printf("Aluno 1: %.2f\n",alu_1.nota);
    printf("Aluno 1: %d\n",alu_1.nascimento.dia);

    printf("\n");

}
