#include<stdio.h>


void seila(int valor)
{
    if (valor >= 0)
        printf("Numero positivo\n");
    else
        printf("Numero negativo\n");
    
    return;
}

int main()
{
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    seila(valor);

    return 0;
}