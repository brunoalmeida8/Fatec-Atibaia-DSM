#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

     // elemento 0
    printf("\nValor contido na posição 0: %d\tPrimeira posição do array            : %p",arr[0],ptr);
    ptr++; // Vai para o proximo endereço - nesse caso elemento 1
    printf("\nValor contido na posição 1: %d\tPosição incrementada em 1 no ponteiro: %p",arr[1],ptr);

    int dif = &arr[5] - &arr[1];

    printf("\n\nDiferença entre ponteiros: %d\n\n",dif);

    return 0;
}
