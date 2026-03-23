#include<stdio.h>
#include<locale.h>

float calcularMedia(float *num1, float *num2)
{
    float media;

    media = (*num1 + *num2)/2;

    return media;
}



int main ()
{
    setlocale(LC_ALL, "portuguese");

    float valor1, valor2, media;



    printf("\nDigite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("\nDigite o segundo valor: ");
    scanf("%f", &valor2);

    media = calcularMedia(&valor1, &valor2);

    printf("\n O valor da media: %.2f", media);

    return 0;
}
