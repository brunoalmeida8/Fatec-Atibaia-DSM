#include<stdio.h>
#include<windows.h>//Biblioteca mágica para o Windows  (acentos)

int main()
{
    SetConsoleOutputCP(65001);// Força o terminal a usar UTF-8 (o mesmo do VS Code) -> <windows.h>

    int array[5];
    int *ptr = array;// ptr aponta para o início (índice 0)

    for (int i = 0; i < 5; i++)
    {
        // LEITURA: Usando aritmética para achar o endereço
        printf("Digite o array na posicao %d: ", i+1);
        scanf("%d", (ptr + i));// (ptr + i) é o endereço da posição i
    }
    
    for (int i = 0; i < 5; i++)
    {
        // (ptr + i) é o endereço da posição i
        // *(ptr + i) é o valor contido naquele endereço
        printf("O dobro do %dº array: %d\n", i+1, (*(ptr + i)*2));
    }
    
    return 0;
}