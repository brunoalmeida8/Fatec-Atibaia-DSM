#include<stdio.h>

int main()
{
    int numero, fatorial;
    printf("Informe um numero: ");
    scanf("%d", &numero);

    fatorial = numero;

    printf("%d", fatorial);
    for (int i = numero; i > 1; i--)
    {
        fatorial = fatorial * (i - 1);
        printf(" x %d = %d", i-1, fatorial);
    }
    
    printf("\n\nFatorial de %d = %d", numero, fatorial);

    return 0;
}