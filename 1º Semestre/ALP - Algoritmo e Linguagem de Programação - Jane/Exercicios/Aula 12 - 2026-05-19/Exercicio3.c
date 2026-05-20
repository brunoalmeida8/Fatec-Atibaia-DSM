#include<stdio.h>

int main()
{
    int matriz[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o valor da posicao %d, %d: ",i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n===Numeros pares da matriz===\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                printf("\nPosicao %d, %d - valor: %d", i, j, matriz[i][j]);
            }
        }
    }

    return 0;
}