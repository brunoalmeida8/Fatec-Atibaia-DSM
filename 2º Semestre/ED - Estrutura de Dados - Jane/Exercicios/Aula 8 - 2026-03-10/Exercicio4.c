#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int var1, var2;
    int *ptr1 = &var1, *ptr2 = &var2;

    printf("Digite o valor da variavel 1: ");
    scanf("%d", &var1);
    printf("Digite o valor da variavel 2: ");
    scanf("%d", &var2);

    printf("endereco de ptr1: %p\n", ptr1);
    printf("endereco de ptr2: %p\n", ptr2);
    if (ptr1 > ptr2)
    {
        printf("O endereco de ptr1 (%p) e maior", ptr1);
    } else
    {
        printf("O endereco de ptr2 (%p) e maior", ptr2);
    }
    




    return 0;
}