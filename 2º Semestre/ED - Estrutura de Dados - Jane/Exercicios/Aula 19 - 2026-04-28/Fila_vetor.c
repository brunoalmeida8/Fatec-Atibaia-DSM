#include <stdio.h>
#include <locale.h>

#define TAMANHO 10

struct Fila
{
    int dados[TAMANHO];
    int inicio, fim;
};

void inserir_fila(struct Fila *fila, int valor)
{
    if (fila->fim+1 < TAMANHO)
    {
        fila->fim++;
        fila->dados[fila->fim] = valor;
        printf("\nValor Inserido na Fila: %d",valor);
    }
    else
        printf("\nFila cheia");
}

int desenfileirar(struct Fila *fila)
{
    int valor;
    if (fila->inicio < TAMANHO)
    {
        if ((fila->inicio == 0) && fila->dados[fila->inicio] == -1)
        {
            printf("\nTentando usar elemento que ainda não existe na fila");
            valor = -1;
        }
        else
        {
            valor = fila->dados[fila->inicio];
            fila->inicio++;
            printf("\nRemovido da fila");
        }
    }
    else
    {
        printf("\nTentando usar dado que ainda não existe");
        valor = -1;
    }
}

void Imprimir_fila(struct Fila fila)
{
    printf("\n\n========== Fila ==================");
    for (int i = fila.inicio; i <= fila.fim; i++)
    {
        if (i == fila.inicio)
            printf("\nInicio: %d",fila.dados[i]);
        else if (i == fila.fim)
            printf("\nFim: %d",fila.dados[i]);
        else
            printf("\nValor: %d",fila.dados[i]);
    }
    if(fila.inicio == fila.fim + 1)
        printf("\n Fila Vazia");
    printf("\n==================================");


}

void main()
{
    setlocale(LC_ALL,"Portuguese");

    int valor = -1;
    struct Fila fila;
    fila.inicio = 0;
    fila.fim = -1;

    for (int i = 0; i < TAMANHO;i++)
        fila.dados[i] = -1;

    printf("\n\n\n<< Primeiro uso  >>>");
    valor = desenfileirar(&fila);
    Imprimir_fila(fila);

    printf("\n\n\n<<< Inserindo dados >>>");

    inserir_fila(&fila,10);
    inserir_fila(&fila,20);
    inserir_fila(&fila,30);
    Imprimir_fila(fila);

    printf("\n\n\n <<< Saindo valores da fila >>>");

    valor = desenfileirar(&fila);
    valor = desenfileirar(&fila);
    Imprimir_fila(fila);

    printf("\n\n\n <<< Novas operações >>>");

    inserir_fila(&fila,40);
    inserir_fila(&fila,50);
    valor = desenfileirar(&fila);
    Imprimir_fila(fila);


    printf("\n\n\n<<< Conteudo do vetor na fila >>>");
    for (int i = 0; i< TAMANHO; i++)
        printf("\n%d",fila.dados[i]);

}
