#include <stdio.h>
#include <stdlib.h>

// Função para mesclar dois subvetays
void merge(int vet[], int esquerda, int meio, int direita) {
    int i, j, k;
    int n1 = meio - esquerda + 1;
    int n2 = direita - meio;

    // Arrays temporários
    int L[n1], R[n2];

    // Copia os dados para os vetays temporários
    for (i = 0; i < n1; i++)
        L[i] = vet[esquerda + i];

    for (j = 0; j < n2; j++)
        R[j] = vet[meio + 1 + j];

    // Mescla os arrays temporários de volta no array original
    i = 0; // Índice inicial do primeiro subarray
    j = 0; // Índice inicial do segundo subarray
    k = esquerda; // Índice inicial do array mesclado
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vet[k] = L[i];
            i++;
        } else {
            vet[k] = R[j];
            j++;
        }
        k++;
    }

    // Copia os elementos restantes de L[], se houver
    while (i < n1) {
        vet[k] = L[i];
        i++;
        k++;
    }

    // Copia os elementos restantes de R[], se houver
    while (j < n2) {
        vet[k] = R[j];
        j++;
        k++;
    }
}



void mergeSort(int vet[],int inicio, int fim)
{
    if (inicio < fim)
    {
        int meio = inicio + (fim - inicio)/2;
        mergeSort(vet,inicio,meio);
        mergeSort(vet,meio+1,fim);
        merge(vet,inicio,meio,fim);
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
    int vet[] = {3, 8, 7, 4, 2, 6, 1, 10, 5, 12,34};
    int vet_size = sizeof(vet) / sizeof(vet[0]);

    printf("Array original: \n");
    printArray(vet, vet_size);

    mergeSort(vet, 0, vet_size - 1);

    printf("\nArray ordenado: \n");
    printArray(vet, vet_size);

}


