#include <stdio.h>    //Inclui funções de entrada e saída
#include <stdlib.h>   //Inclui funções de alocação dinâmica de memória (malloc, free) e controle do programa (exit).
#include <string.h>   //Inclui funções para manipulação de strings, como strcpy.

//estrutura do no da lista
typedef struct Pessoa
{
    int idade;
    char nome[30];
    struct Pessoa *prox;
}Pessoa;

//inicializa a lista
void inicializar(Pessoa ** lista)
//Recebe um ponteiro para ponteiro, pois precisa alterar o ponteiro da lista na main.
{
    *lista = NULL; //Definie a lista como vazia, apontando para NULL
}

//Cria um novo nó
Pessoa* criarNo(int idade, char nome[]) 
//função que retorna ponteiro para uma variavel do tipo Pessoa
{
    Pessoa *novo = (pessoa*)malloc(sizeof(Pessoa));
    //Aloca memoria dinamicamente para um novo nó do tipo Pessoa.

    if (novo == NULL) //verifica erro
    {
        printf("Erro ao alocar memoria!\n");
        exit(1);
    }

    //Atribuição dos dados caso esteja ok com a alocação na memoria
    novo->idade = idade;
    strcpy(novo->nome, nome);
    noco->prox = NULL;

    return novo; //retorno do endereço no novo nó    
}

//Insere no final (forma mais didatica)
void inserirFim(Pessoa **lista, int idade, char nome[]) 
//insere um novo nó no final da lista e recebe Pessoa ** porque pode alterar o 
//início da lista.
{

    Pessoa *novo = criarNo(idade, nome);//chama a função para a alocação do novo nó

    if (*lista == NULL)
    {
        *lista = novo; //lista vazia o novo nó passa a ser o primeiro
        return;
    }
    
    Pessoa *aux = *lista; 
    //ponteiro auxiliar (aux) para percorrer a lista.  Para o caso da lista não estar vazia

    while (aux->prox != NULL)
    {
        aux = aux->prox; //avança a lista até o ultimo nó    
    }

    aux->prox = novo; // insere no final
}

//Imprime todos os nós
void imprimir(Pessoa *lista) //Recebe o endereço do primeiro nó da lista.
{

    if (lista == NULL))
    {
        printf("Lista vasia.\n");
        return;
    }
    
    Pessoa *aux = lista; //ponteiro auxiliar para percorrer a lista

    while (aux != NULL)
    {
        printf("\nno atual: %p\t", aux);
        printf("Idade: %d\tNome: %s\tProximo: %p\n", aux->idade, aux->nome, aux->prox);
        aux = aux->prox; //vai para o proximo nó
    }
}

void liberarlista(Pessoa **lista)
//Recebe ponteiro para ponteiro, pois ao final queremos que a lista fique NULL.
{
    Pessoa *aux; //ponteiro auxiliar (aux)

    while (*lista != NULL)
    //percorre a lista desde o inicio ate o ultimo nó - liberando a memoria
    {
        aux = *lista;           //guarda o nó atual
        *lista = (*lista)->prox;//avança para o proximo nó
        free(aux);              //libera o nó antigo
    }
}


int main {
    
    Pessoa *lista; //ponteiro para o inicio da lista

    inicializar
}
    
}
    