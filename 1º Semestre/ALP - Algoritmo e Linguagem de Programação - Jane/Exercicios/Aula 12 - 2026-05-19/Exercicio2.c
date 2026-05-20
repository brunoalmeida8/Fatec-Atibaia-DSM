#include<stdio.h>

int main()
{
    int matriz[3][3], soma = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o valor da posicao %d, %d: ",i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            soma += matriz[i][j];//o mesmo que -> soma = soma + matriz[i][j];
        }
    }
    
    printf("\nA soma dos valores da matriz: %d", soma);

    return 0;
}