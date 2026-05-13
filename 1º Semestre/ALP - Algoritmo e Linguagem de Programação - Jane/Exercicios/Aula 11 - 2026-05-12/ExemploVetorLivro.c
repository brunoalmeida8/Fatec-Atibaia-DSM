#include<stdio.h>

int main()
{
    int vetor[6], somaPar = 0, qtdImpar;
    for (int i = 0; i < 6; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    printf("\n\n===Os numeros pares digitados===\n");
    for (int i = 0; i < 6; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            printf("Vetor par na posicao %d: %d\n", i, vetor[i]);
            somaPar = somaPar + vetor[i];
        } 
    }
    printf("A soma de numeros pares: %d\n", somaPar);
    
    
    
    printf("\n\n===Os numeros impares digitados===\n");
    for (int i = 0; i < 6; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            printf("Vetor Impar na posicao %d: %d\n", i, vetor[i]);
            qtdImpar++;
        }
    }
    printf("A quantia de numeros Impares: %d\n", qtdImpar);
    
    return 0;
}