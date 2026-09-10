#include<stdio.h>

int main()
{
    float numero[10];

    printf("Digite dez numeros: \n");

    for (int i = 0; i < 10; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%f", &numero[i]);
    }

    for (int i = 9; i >= 0 ; i--)
    {
        printf("Numero: %.2f\n", numero[i]);
    }
    
    return 0;
}