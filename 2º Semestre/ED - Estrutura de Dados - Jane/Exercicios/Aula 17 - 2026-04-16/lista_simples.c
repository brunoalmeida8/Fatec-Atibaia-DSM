#include <stdio.h>    //Inclui funções de entrada e saída
#include <stdlib.h>   //Inclui funções de alocação dinâmica de memória (malloc, free) e controle do programa (exit).
#include <string.h>   //Inclui funções para manipulação de strings, como strcpy.

// Estrutura do nó da lista
typedef struct Pessoa
{
    int idade;
    char nome[30];
    struct Pessoa *prox;
} Pessoa;

// Inicializa a lista
void inicializar(Pessoa **lista)  //Recebe um ponteiro para ponteiro, pois precisa alterar o ponteiro da lista na main.
{
    *lista = NULL;    //Define a lista como vazia, apontando para NULL.
}

// Cria um novo nó
Pessoa* criarNo(int idade, char nome[])   //Função que retorna ponteiro para uma variável do tipo Pessoa
{
    Pessoa *novo = (Pessoa*)malloc(sizeof(Pessoa));  //Aloca memória dinamicamente para um novo nó do tipo Pessoa.

    if (novo == NULL) //Verifica erro
    {
        printf("Erro ao alocar memória!\n");
        exit(1);
    }

    //Atribuição dos dados caso esteja ok com a alocação na memória
    novo->idade = idade;
    strcpy(novo->nome, nome);
    novo->prox = NULL;

    return novo; //Retorno do endereço do novo nó
}

// Insere no final (forma mais didática)
void inserirFim(Pessoa **lista, int idade, char nome[]) // Insere um novo nó no final da lista  e recebe Pessoa ** porque pode alterar o início da lista.
{

    Pessoa *novo = criarNo(idade, nome); //Chama função para alocação do novo nó

    if (*lista == NULL)
    {
        *lista = novo; //lista vazia o novo nó passa a ser o primeiro
        return;
    }

    Pessoa *aux = *lista; // ponteiro auxiliar (aux) para percorrer a lista. Para o caso da lista não estar vazia

    while (aux->prox != NULL)
    {
        aux = aux->prox;   // avança a lista até o ultimo nó
    }

    aux->prox = novo; // insere no final
}

// Imprime todos os nós
void imprimir(Pessoa *lista)  //Recebe o endereço do primeiro nó da lista.
{

    if (lista == NULL)
    {
        printf("Lista vazia.\n");
        return;
    }

    Pessoa *aux = lista;   //ponteiro auxiliar para percorrer a lista

    while (aux != NULL)    //Enquanto o ponteiro auxiliar não apontar para nulo
    {
        printf("\nno atual: %p\t",aux);
        printf("Idade: %d\tNome: %s\tProximo: %p\n", aux->idade, aux->nome, aux->prox);
        aux = aux->prox;  // vai para o próximo nó
    }
}

void liberarlista(Pessoa **lista)    //Recebe ponteiro para ponteiro, pois ao final quleremos que a lista fique NULL.
{
    Pessoa *aux;    //ponteiro auxiliar (aux)

    while (*lista != NULL)  // percorre a lista desde o inicio até o ultimo nó - liberando a memória
    {
        aux = *lista;              // guarda o nó atual
        *lista = (*lista)->prox;   // avança para o próximo nó
        free(aux);                 // libera o nó antigo
    }
}


int main() {

    Pessoa *lista;      //Ponteiro para o inicio da lista

    inicializar(&lista);    // Inicializa a lista

    inserirFim(&lista, 15, "XPTO1");  //insere conteúdo no fim da lista
    inserirFim(&lista, 20, "XPTO2");
    inserirFim(&lista, 30, "XPTO3");

    imprimir(lista);    // Imprimir os nós da lista

    liberarlista(&lista);   //Liberar a memória alocada

    return 0;
}
