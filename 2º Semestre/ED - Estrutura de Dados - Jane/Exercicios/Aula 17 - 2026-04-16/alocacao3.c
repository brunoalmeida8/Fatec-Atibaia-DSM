#include<stdio.h>//printf e scanf
#include<stdlib.h>//malloc
#include<locale.h>//acentos
#include<string.h>//strcpy

typedef struct tipo_registro Registro;

struct tipo_registro
{
    int codigo;
    char nome[50];
    struct tipo_registro *prox_no;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    Registro *p1, *p2, *p3;

    p1 = (Registro*) malloc(sizeof(Registro));
    p2 = (Registro*) malloc(sizeof(Registro));
    p3 = (Registro*) malloc(sizeof(Registro));

    if (!p1 || !p2 || !p3)
        printf("Memoria indisponível");
    else
    {
        p1->codigo = 1;
        //strcpy ela copia "xpto1" para dentro do nome do p1
        strcpy(p1->nome, "xpto1");
        p1->prox_no = p2;

        p2->codigo = 2;
        strcpy(p2->nome, "xpto2");
        p2->prox_no = p3;

        p3->codigo = 3;
        strcpy(p3->nome, "xpto3");
        p3->prox_no = NULL;

        printf("\nEndereço de p1: %p", p1);
        printf("\nCodigo de p1: %d", p1->codigo);
        printf("\nNome de p1: %s", p1->nome);
        printf("\nEndereço contido no prox_no de p1: %p\n", p1->prox_no);

        printf("\n");
        printf("\nEndereço de p2: %p", p2);
        printf("\nCodigo de p2: %d", p2->codigo);
        printf("\nNome de p2: %s", p2->nome);
        printf("\nEndereço contido no prox_no de p2: %p\n", p2->prox_no);

        printf("\n");
        printf("\nEndereço de p3: %p", p3);
        printf("\nCodigo de p3: %d", p3->codigo);
        printf("\nNome de p3: %s", p3->nome);
        printf("\nEndereço contido no prox_no de p3: %p\n", p3->prox_no);
        
        free(p1);
        free(p2);
        free(p3);
    }

    return 0;
}
