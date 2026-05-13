#include<stdio.h>

int main()
{
    int idade, cont = 0;
    float altura, somaAlturaVelho = 0, media;
    do
    {
        printf("Digite uma idade ou zero para sair: ");
        scanf("%d", &idade);
        if(idade == 0)
            continue;
        printf("Digite a sua altura: ");
        scanf("%f", &altura);
        if (idade > 50 )
        {
            somaAlturaVelho = somaAlturaVelho + altura;
            cont++;
        }
    } while (idade > 0);

    media = somaAlturaVelho / cont;
    
    printf("\n\nMedia de altura dos veio >50: %.2f\n", media);

    return 0;
}