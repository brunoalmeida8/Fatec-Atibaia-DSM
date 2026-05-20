#include<stdio.h>

int main()
{
    int matriz[4][4], cont = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o valor da posicao %d, %d: ",i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matriz[i][j] > 10)
            {
                cont++;
            }
        }
    }
    
    printf("\nA quantidade de valores maior que dez: %d", cont);

    return 0;
}