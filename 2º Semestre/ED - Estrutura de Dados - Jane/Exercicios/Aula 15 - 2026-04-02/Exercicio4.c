#include<stdio.h>
#include<stdlib.h>

int *preencherVetor(int n)
{
    int *vetor = (int*) calloc(n,sizeof(int));

    // Proteção (sempre bom!)
    if (vetor == NULL) {
        printf("Erro na alocação!\n");
        return NULL;
    }

    for (int i = 0; i < n; i++)
    {
        vetor[i] = i;
    }
    return vetor;
}



int main()
{
    int n;

    printf("Digite o numero de elementos do vetor: ");
    scanf("%d", &n);

    int *ptr = preencherVetor(n);

    if (ptr != NULL)
    {
        printf("Vetor preenchido\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d\n", ptr[i]);
        }
        free(ptr);
    }

    return 0;
}