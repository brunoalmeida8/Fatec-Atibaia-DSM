#include<stdio.h>
#include<locale.h>

float calcular (float A, float B, float C)
{
    return (A * A) + (B * B) + (C * C);
}


int main()
{
    setlocale(LC_ALL, "portuguese");

    float A, B, C, resul;
    
    printf("\nDigite o valor para A: ");
    scanf("%f", &A);
    printf("\nDigite o valor para B: ");
    scanf("%f", &B);    
    printf("\nDigite o valor para C: ");
    scanf("%f", &C);

    resul = calcular(A, B, C);

    printf("O resultado é: %.2f", resul);

    return 0;
}
