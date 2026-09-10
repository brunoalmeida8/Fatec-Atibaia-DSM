#include<stdio.h>

int main()
{
    float media = 0;
    int numeros[3], soma = 0;//teria q ser float tbm, mas o exercicio é int
    int count = 3;

    printf("Digite 5 numeros inteiros: \n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < count; i++)
    {
        printf("\nNumeros: %d", numeros[i]);
        soma = soma + numeros[i];
    }    
    
    media = soma/count;
    printf("\nSoma: %d", soma);
    printf("\nMedia: %.2f", media);
    

    return 0;
}