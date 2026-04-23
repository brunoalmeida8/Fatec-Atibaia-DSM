#include<stdio.h>
#include<windows.h>

int main()
{
    SetConsoleOutputCP(65001);

    int array[5], *ptr = array;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %dº array: ", i+1);
        scanf("%d", (ptr + i));
    }
    
    for (int i = 0; i < 5; i++)
    {
        if ((*(ptr + i) % 2) == 0)
        {
            printf("%dº posicao \t Endereco: %p \t Valor: %d\n", i+1, ptr + i, *(ptr + i)); //obrigatorio parenteses só no valor, pois * vem primeiro que +
        }
    } 
    

    return 0;
}