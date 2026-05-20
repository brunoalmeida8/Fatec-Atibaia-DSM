#include <stdio.h>

int main()
{

    int x[10], n,i,aux;

    for (i=0;i<=9;i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&x[i]);
    }

    for (n=1;n<=10;n++)
    {
        for (i=0;i<=8;i++)
        {
            if (x[i] > x[i+1])
            {
                aux = x[i];
                x[i] = x[i+1];
                x[i+1] = aux;
            }
        }
    }

    for (i=0;i<=9;i++)
    {
        printf("\nValores ordenados");
        printf("\n%d",x[i]);
    }

   return 0;


}

