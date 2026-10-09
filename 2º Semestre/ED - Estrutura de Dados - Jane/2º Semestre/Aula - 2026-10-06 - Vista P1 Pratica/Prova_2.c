#include <stdio.h>

void lerTemperaturas(float temp[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("Temperatura do dia %d: ", i + 1);
        scanf("%f", &temp[i]);
    }
}

void mostrarTemperaturas(float temp[])
{
    printf("\nTemperaturas registradas:\n");

    for (int i = 0; i < 7; i++)
    {
        printf("Dia %d: %.0f C\n", i + 1, temp[i]);
    }
}

float calcularMedia(float temp[])
{
    float soma = 0;

    for (int i = 0; i < 7; i++)
    {
        soma += temp[i];
    }

    return soma / 7;
}

int main()
{
    float temperaturas[7];

    lerTemperaturas(temperaturas);

    mostrarTemperaturas(temperaturas);

    printf("\nMedia semanal: %.0f C\n",calcularMedia(temperaturas));

    return 0;
}
