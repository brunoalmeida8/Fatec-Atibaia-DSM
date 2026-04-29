#include<stdio.h>

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d",&num);

    if (num > 0)
    {
        printf("Numero %d - Positivo", num);
    } else if (num < 0)    
    {
        printf("Numero %d - Negativo", num);
    } else
        printf("Numero - zero");    
}