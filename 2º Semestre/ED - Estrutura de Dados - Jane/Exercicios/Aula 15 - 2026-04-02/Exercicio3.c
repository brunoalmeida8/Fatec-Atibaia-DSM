#include<stdio.h>
#include<stdlib.h>

typedef struct cadastro
{
    char nome[50];
    int idade;
    char endereco[50];
}cadastro;

cadastro *fabricarCadastros(int n)
{
    cadastro *ptr = (cadastro*) malloc(n * sizeof(cadastro));

    if (ptr == NULL)
    {
        printf("Erro: Nao foi possivel alocar memoria.\n");
        return NULL;
    }
    
    for (int i = 0; i < n; i++)
    {
        // O espaço antes do % consome sujeira (enter) de leituras anteriores
        // O [^\n] diz: "leia tudo até encontrar um enter" - nome com espaços
        printf("Digite o nome da pessoa %d: ", i+1);
        scanf(" %[^\n]s", ptr[i].nome);

        printf("Digite a idade da pessoa %d: ", i+1);
        scanf("%d", &ptr[i].idade);

        printf("Digite o endereco da pessoa %d: ", i+1);
        scanf(" %[^\n]", ptr[i].endereco);
    }
    return ptr;
}


int main()
{
    int n;
    cadastro *ptr;
    printf("Digite a quantidade de cadastros: ");
    scanf("%d", &n);

    ptr = fabricarCadastros(n);

    if (ptr == NULL)
    {
        printf("Erro: Nao foi possivel alocar memoria.\n");
        return 0;
    }
    

    printf("\n\nExibindo pessoas cadastradas\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("Nome %d\t %s\n", i, ptr[i].nome);
        printf("Idade %d\t %d\n", i, ptr[i].idade);
        printf("Endereco %d\t %s\n", i, ptr[i].endereco);
    }
    free(ptr);
    return 0;
}






/*
//Em vez de:
ptr->idade = 25;

// Você teria que fazer isso:
(*ptr).idade = 25

*/ 