#include<stdio.h>

int main()
{
    int x[5],i,j,eleito,menor,pos;

// carga do vetor
    for (i=0;i<=4;i++)
   {
        printf("Digite o valor: " );
        scanf("%d",&x[i]);
    }


    for (i=0;i<=3;i++)
    {
        eleito = x[i];
        menor = x[i+1];
        pos = i+1;

        for (j=i+2;j<=4;j++)
        {
            if (x[j] < menor)
            {
                menor = x[j];
                pos = j;
            }
        }

        if (menor < eleito)
        {
            x[i]=x[pos];
            x[pos]=eleito;
        }
    }

    // mostrando o vetor ordenado
    for (i=0;i<=4;i++)
        printf("\nValor: %d",x[i]);

}
