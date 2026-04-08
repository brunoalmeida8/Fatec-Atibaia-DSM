#include<stdio.h>
#include<locale.h>

typedef struct fichaPessoa
{
    char nome[50];
    int idade;
    float salario;
    char data_nascimento[11];
}pessoas;

int main()
{
    setlocale(LC_ALL, "portuguese");

     pessoas pessoa[3]; 
    for (int i = 0; i < 3; i++)
    {
        printf("\n\nDigite seu nome: ");
        //setbuf(stdin, NULL); // LIMPA O BUFFER AQUI
        gets(pessoa[i].nome);
        printf("Digite sua idade: ");
        scanf("%d%*c", &pessoa[i].idade);
        printf("Digite seu salario: ");
        scanf("%f%*c", &pessoa[i].salario);
        printf("Digite sua data de nascimento: ");
        //setbuf(stdin, NULL); // LIMPA O BUFFER AQUI
        gets(pessoa[i].data_nascimento);        
    }

        printf("\n\n---Essa são as fichas---");

    for (int i = 0; i < 3; i++)
    {
        printf("\nNome: %s", pessoa[i].nome);
        printf("\nIdade: %d", pessoa[i].idade);
        printf("\nSalario: %.2f", pessoa[i].salario);
        printf("\nData de Nascimento: %s", pessoa[i].data_nascimento);
    }
    
    return 0;
}