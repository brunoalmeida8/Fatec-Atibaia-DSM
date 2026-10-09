#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    // declaração do tipo
    struct No
    {
        int dado;
        struct No *proximo;
    };

    struct No *inicio = NULL; //ponteiro para o primeiro Nó da lista, inicializando com nulo
    struct No *novo;    // ponteiro usado para criar novo Nó
    struct No *atual;   //ponteiro auxiliar para percorrer a lista

    //Print dos ponteiros
    printf("\nponteiro inicio: %p",inicio);
    printf("\nponteiro novo:   %p",novo);
    printf("\nponteiro atual:  %p",atual);

    int valor; // conteudo digitado pelo usuário

    do {
        printf("\nDigite um valor (0 para encerrar): ");
        scanf("%d", &valor);

        if (valor != 0) {

            // aloca espaço na memoria do tamanho de sizeof de No
            novo = (struct No *) malloc(sizeof(struct No));
            printf("\nponteiro novo após alocação: %p",novo); //ponteiro apos alocaação
            if (novo == NULL)
            {
                printf("Erro de alocacao de memoria!\n");
                return 1;
            }

            novo->dado = valor;
            novo->proximo = NULL;

            if (inicio == NULL)
            {
                inicio = novo;
                //Print dos ponteiros
                printf("\nponteiro inicio: %p",inicio);
                printf("\nponteiro novo:   %p",novo);
                printf("\nponteiro atual:  %p",atual);
            }
            else
            {
                atual = inicio;

                while (atual->proximo != NULL) {
                    atual = atual->proximo;
                }

                atual->proximo = novo;
            }
        }

    } while (valor != 0);

    printf("\nElementos da lista:\n");

    atual = inicio;

    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->proximo;
    }

    printf("\n");

    /* Liberação da memória */
    atual = inicio;

    while (atual != NULL) {
        struct No *temp = atual;
        atual = atual->proximo;
        free(temp);
    }

    return 0;
}
