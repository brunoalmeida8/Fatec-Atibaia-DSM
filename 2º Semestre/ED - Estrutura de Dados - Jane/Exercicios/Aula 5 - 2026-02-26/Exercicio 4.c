#include <stdio.h>
#include <locale.h>

int maior, menor;

void verificaNumeros()
{
    int num;

    for (int i = 1; i <= 5; i++)
    {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);

        if (i == 1)
        {
            maior = num;
            menor = num;
        } else
        {
            if (num > maior) maior = num;
            if (num < menor) menor = num;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    verificaNumeros();

    printf("\nO MENOR é: %d", menor);
    printf("\nO MAIOR é: %d\n", maior);

    return 0;
}
