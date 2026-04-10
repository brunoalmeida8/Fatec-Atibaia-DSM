#include<stdio.h>

int main()
{
    float vetor[10], soma, media;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite numero do valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        soma = soma + vetor[i];
    }
    media = soma / 10;
    
    printf("\n\nA media dos 10 valores: %.2f\n", media);


    
    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] > media)
        {
            printf("\nVetor %d tem valor = %.2f e esta acima da media %.2f", i+1, vetor[i], media);
        }      
    }
    

    return 0;
}