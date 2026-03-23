#include <stdio.h>
#include <locale.h>

float calculaMedia()
{
    float media;
    int num, continua;
    int contador = 0;
    int soma = 0;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma = soma + num;
        contador ++;
        printf("Digite 1 para continuar ou 0 para parar: ");
        scanf("%d", &continua);


    }
    while (continua != 0);

    media = soma/contador;

    return media;

}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float media;

    media = calculaMedia();

    printf("\nA Media é igual a: %.2f", media);

    return 0;
}
