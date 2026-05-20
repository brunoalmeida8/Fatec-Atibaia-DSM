#include <stdio.h>
int main()
{
    // declaração de array unidimensional (vetor)
    int xpto[5],i;
    // Entrada de dados no array
    for (i=0;i<=4;i++)
    {
        printf("Digite um valor ");
        scanf("%d",&xpto[i]);
    }
    // Apresentação dos dados da array
    printf("\n\n==== Valores digitados ====");
    for (i=0;i<=4;i++)
    {
        if(xpto[i]%2==0)
        printf("\nValor na posição %d: %d",i,xpto[i]);
    }
    return 0;

}

