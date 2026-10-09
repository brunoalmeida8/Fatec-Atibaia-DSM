#include <stdio.h>
#include <stdlib.h>
// #include<locale.h>//usar essa ou a <windows.h>
#include <windows.h> //Biblioteca mágica para o Windows  (acentos)

typedef struct No
{
    int valor;
    struct No *prox; // Referência para o próximo objeto
} No;

int main()
{
    // setlocale(LC_ALL, "Portuguese");//usar isso ou o de baixo pq da conflito
    SetConsoleOutputCP(65001); // Força o terminal a usar UTF-8 (o mesmo do VS Code) -> <windows.h>
    No *cabeca = NULL;         // A nossa referência inicial (aponta para o vazio no começo)
    int n, i, numeroLido;

    printf("Quantos numeros voce quer inserir? ");
    scanf("%d", &n);

    // O loop que lê os números e insere no final
    for (i = 0; i < n; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &numeroLido);

        // 1. Instancia o novo objeto na memória (equivalente a um 'new No()')
        No *novo = (No *)malloc(sizeof(No));
        novo->valor = numeroLido;
        novo->prox = NULL; // O último da fila sempre aponta para NULL

        // 2. Se a lista estiver vazia, a cabeca passa a apontar para esse novo objeto
        if (cabeca == NULL)
        {
            cabeca = novo;
        }
        else
        {
            // 3. Se a lista já tem gente, precisamos caminhar até o último nó
            No *atual = cabeca; // Usamos um ponteiro temporário para caminhar sem perder a cabeca

            while (atual->prox != NULL)
            { // Enquanto houver um próximo, avança
                atual = atual->prox;
            }

            // Chegamos no último! Agora o 'prox' dele aponta para o novo objeto
            atual->prox = novo;
        }
    }

    //imprimir a lista
    printf("\nElementos da lista: ");
    No *aux = cabeca;

    while (aux != NULL)
    {
        printf("%d ", aux->valor);
        aux = aux->prox;
    }
    


    return 0;
}