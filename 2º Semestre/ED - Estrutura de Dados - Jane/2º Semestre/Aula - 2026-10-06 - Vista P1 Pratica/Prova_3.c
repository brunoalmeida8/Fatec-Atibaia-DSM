#include <stdio.h>

int main()
{
    int numeros[10];
    int pares = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0)
        {
            pares++;
        }
    }

    printf("\nQuantidade de numeros pares: %d\n", pares);

    return 0;
}
