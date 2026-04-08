#include<stdio.h>
#include<locale.h>


float calcularMedia (float *num1, float *num2)
{
    float resultado;

    resultado= (*num1 + *num2) / 2;

    return resultado;
}



int main ()
{
    setlocale(LC_ALL, "portuguese");

    float val1, val2, media;

    printf("Digite o valor 1: ");
    scanf("%f", &val1);
    printf("Digite o valor 2: ");
    scanf("%f", &val2);

    media = calcularMedia (&val1, &val2);

    printf("O valor da media aritmetica e: %.2f", media);
    return 0;
}