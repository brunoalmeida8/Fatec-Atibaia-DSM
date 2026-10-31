#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct Aluno
{
    char nome[50];
    float nota;
    struct Aluno *ant;
    struct Aluno *prox;
} Aluno;

Aluno *inicio = NULL;
Aluno *fim = NULL;

// Inserção no início
void inserirInicio(char nome[], float nota)
{
    Aluno *novo = (Aluno*) malloc(sizeof(Aluno));

    strcpy(novo->nome, nome);
    novo->nota = nota;

    novo->ant = NULL;
    novo->prox = inicio;

    if(inicio != NULL)
        inicio->ant = novo;
    else
        fim = novo;

    inicio = novo;
}

//Inserção no final
void inserirFinal(char nome[], float nota)
{
    Aluno *novo = (Aluno*) malloc(sizeof(Aluno));

    strcpy(novo->nome, nome);
    novo->nota = nota;

    novo->prox = NULL;
    novo->ant = fim;

    if(fim != NULL)
        fim->prox = novo;
    else
        inicio = novo;

    fim = novo;
}

// Busca bidirecional
Aluno* buscar(char nome[])
{

    Aluno *esq = inicio;
    Aluno *dir = fim;

    while(esq != NULL && dir != NULL)
    {

        if(strcmp(esq->nome, nome) == 0)
            return esq;

        if(strcmp(dir->nome, nome) == 0)
            return dir;

        if(esq == dir || esq->prox == dir)
            break;

        esq = esq->prox;
        dir = dir->ant;
    }

    return NULL;
}

//Inserção no meio (após um aluno existente)
void inserirMeio(char referencia[], char nome[], float nota)
{

    Aluno *atual = buscar(referencia);

    if(atual == NULL)
    {
        printf("Aluno de referencia nao encontrado!\n");
        return;
    }

    Aluno *novo = (Aluno*) malloc(sizeof(Aluno));

    strcpy(novo->nome, nome);
    novo->nota = nota;

    novo->prox = atual->prox;
    novo->ant = atual;

    if(atual->prox != NULL)
        atual->prox->ant = novo;
    else
        fim = novo;

    atual->prox = novo;
}

//Remoção
void remover(char nome[])
{

    Aluno *aux = buscar(nome);

    if(aux == NULL)
    {
        printf("Aluno nao encontrado!\n");
        return;
    }

    if(aux == inicio)
        inicio = aux->prox;

    if(aux == fim)
        fim = aux->ant;

    if(aux->ant != NULL)
        aux->ant->prox = aux->prox;

    if(aux->prox != NULL)
        aux->prox->ant = aux->ant;

    free(aux);

    printf("Aluno removido com sucesso!\n");
}

// Alteração de conteúdo
void alterar(char nome[])
{

    Aluno *aux = buscar(nome);

    if(aux == NULL)
    {
        printf("Aluno nao encontrado!\n");
        return;
    }

    printf("Novo nome: ");
    scanf("%s", aux->nome);

    printf("Nova nota: ");
    scanf("%f", &aux->nota);

    printf("Dados alterados com sucesso!\n");
}

// Exibição do início para o fim
void mostrarInicioFim()
{

    Aluno *aux = inicio;

    printf("\n--- LISTA (INICIO -> FIM) ---\n");

    while(aux != NULL)
    {
        printf("Nome: %s | Nota: %.2f\n", aux->nome,aux->nota);
        aux = aux->prox;
    }
}

// Exibição do fim para o início
void mostrarFimInicio()
{

    Aluno *aux = fim;

    printf("\n--- LISTA (FIM -> INICIO) ---\n");

    while(aux != NULL)
    {
        printf("Nome: %s | Nota: %.2f\n",aux->nome,aux->nota);
        aux = aux->ant;
    }
}


int main()
{
    setlocale(LC_ALL,"Portuguese");

    int opcao;
    char nome[50];
    char referencia[50];
    float nota;

    do {

        printf("\n\n======== MENU ========\n");
        printf("1 - Inserir no inicio\n");
        printf("2 - Inserir no final\n");
        printf("3 - Inserir no meio\n");
        printf("4 - Remover aluno\n");
        printf("5 - Buscar aluno\n");
        printf("6 - Alterar aluno\n");
        printf("7 - Mostrar inicio -> fim\n");
        printf("8 - Mostrar fim -> inicio\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao)
        {

            case 1:

                printf("Nome: ");
                scanf("%s",nome);

                printf("Nota: ");
                scanf("%f", &nota);

                inserirInicio(nome, nota);
                break;

            case 2:

                printf("Nome: ");
                scanf("%s", nome);

                printf("Nota: ");
                scanf("%f", &nota);

                inserirFinal(nome, nota);
                break;

            case 3:

                printf("Inserir apos qual aluno? ");
                scanf("%s", referencia);

                printf("Novo nome: ");
                scanf("%s", nome);

                printf("Nota: ");
                scanf("%f", &nota);

                inserirMeio(referencia, nome, nota);
                break;

            case 4:

                printf("Nome do aluno a remover: ");
                scanf("%s", nome);

                remover(nome);
                break;

            case 5:

                printf("Nome para busca: ");
                scanf("%s", nome);

                Aluno *resultado = buscar(nome);

                if(resultado != NULL)
                    printf("Encontrado -> %s | %.2f\n",
                           resultado->nome,
                           resultado->nota);
                else
                    printf("Aluno nao encontrado!\n");

                break;


            case 6:

                printf("Nome do aluno a alterar: ");
                scanf("%s", nome);

                alterar(nome);
                break;

            case 7:
                mostrarInicioFim();
                break;

            case 8:
                mostrarFimInicio();
                break;

            case 0:
                printf("Encerrando...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while(opcao != 0);

    return 0;
}
