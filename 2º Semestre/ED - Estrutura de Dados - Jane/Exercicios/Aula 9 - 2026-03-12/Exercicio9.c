#include<stdio.h>

void funcao(int *vetor)
{
    for (int i = 0; i < 5; i++)
    {
        printf("O valor de vetor[%d]: %d\n", i, *vetor);
        vetor++;
    }
    
}


int main()
{
    int vetor[] = {10, 20, 30, 40, 50};
    funcao(vetor);

    return 0;
}