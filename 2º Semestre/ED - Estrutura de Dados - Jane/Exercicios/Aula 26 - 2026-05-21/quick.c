#include <stdio.h>

void troca(int X[], int i, int j)
{
    int aux;
    aux = X[i];
    X[i] = X[j];
    X[j] = aux;
}

int particao(int X[],int p,int r)
{
    int pivo, i, j;
    pivo = X[(p+r)/2];
    i = p - 1;
    j = r + 1;
    while (i < j)
    {
        do
        {
            j = j - 1;
        }while (X[j] > pivo);
        do
        {
            i = i + 1;
        }while (X[i] < pivo);

        if (i < j)
            troca(X,i,j);
    }
    return j;
}

void quicksort(int X[], int p, int r)
{
    int q;
    if (p < r)
    {
        q = particao(X,p,r);
        quicksort(X,p,q);
        quicksort(X,q+1,r);
    }
}


// Função para imprimir o array
void printArray(int vet[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", vet[i]);
    printf("\n");
}

int main() {
    int vet[] = {3, 8, 7, 4, 2, 6, 1, 10, 5, 12};
    int vet_size = sizeof(vet) / sizeof(vet[0]);

    printf("Array original: \n");
    printArray(vet, vet_size);

    quicksort(vet,0,vet_size-1);

    printf("\nArray ordenado: \n");
    printArray(vet, vet_size);

}


