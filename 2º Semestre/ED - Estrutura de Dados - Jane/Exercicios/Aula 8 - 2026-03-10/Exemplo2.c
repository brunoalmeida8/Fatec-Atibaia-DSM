#include<stdio.h>
#include<locale.h>




int main ()
{
    setlocale(LC_ALL, "portuguese");

    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("\nValor contido na posi��o 0: %d\tPrimeira posi��o do array            : %p", arr[0], ptr);
    ptr++; //Vai para o proximo endere�o - nesse caso elemento 1
    printf("\nValor contido na posi��o 1: %d\tPosi��o incrementada em 1 no ponteiro: %p", arr[1], ptr);

    int dif = &arr[4] - &arr[1];

    printf("\n\nDiferen�a entre ponteiros: %d\n\n", dif);


    return 0;
}


