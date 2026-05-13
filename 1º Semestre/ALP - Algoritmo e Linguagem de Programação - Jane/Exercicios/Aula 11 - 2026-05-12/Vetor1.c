#include<stdio.h>

int main ()
{
    //declaração de array unidimensional (vetor)
    int xpto[5], i;

    //Entrada de dados no array

    for (int i = 0; i < 5; i++) //ou poderia ser i<=4
    {
        printf("Digite um valor: ");
        scanf("%d", &xpto[i]);
    }
    
    //Apresentação dos dados da array
    printf("\n\n==== Valores digitados ====");
    for (int i = 0; i < 5; i++)
    {
        //if(xpto[i] % 2 == 0) //mostrar só os valores par
        printf("\nValor na posicao %d: %d", i, xpto[i]);
    }

    return 0;
}