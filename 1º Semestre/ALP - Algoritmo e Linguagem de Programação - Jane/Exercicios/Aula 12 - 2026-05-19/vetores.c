#include<stdio.h>

int main()
{
    int i, j, mat[3][4];
    
    //entrada de dados
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Entre com o dado da posicao %d, %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    //saida de dados
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("\nConteudo da posicao %d, %d: ", i, j);
            printf("%d", mat[i][j]);
        }
    }
        

    return 0;
}

