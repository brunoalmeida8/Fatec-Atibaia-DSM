#include<stdio.h>
#include<locale.h>

float calcularDesconto(float valorOriginal)
{
    float valorDesconto;
    valorDesconto = valorOriginal * 0.9;
    return valorDesconto;
}




int main()
{
    setlocale(LC_ALL, "portuguese");

    float valorOriginal, valorDesconto;

    printf("Digite o valor original do produto: R$");
    scanf("%f", &valorOriginal);

    valorDesconto = calcularDesconto(valorOriginal);

    printf("O valor do produto com desconto é R$%.2f", valorDesconto);

    return 0;
}
