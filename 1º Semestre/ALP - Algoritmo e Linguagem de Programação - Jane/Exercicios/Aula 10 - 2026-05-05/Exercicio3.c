#include<stdio.h>


int calcularMaior(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}


int main()
{
    int num1, num2;

    printf("Informe um numero: ");
    scanf("%d", &num1);
    printf("Informe outro numero: ");
    scanf("%d", &num2);

    maior = calcularMaior(num1, num2);

    printf("O maior numero: %d", maior);

    return 0;
}