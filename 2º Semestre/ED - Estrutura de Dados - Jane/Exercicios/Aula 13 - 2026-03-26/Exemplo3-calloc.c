#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int *ptr;

    ptr = (int*) calloc(10, sizeof(int));
    //Aloca memoria para 10 inteiros e inicializa a zero

    if (ptr == NULL)
    {
        printf("Falha na realocação da memoria\n");
        return 1;
    }

    //Usar a memoria alocada
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", ptr[i]); //todos os valores serao zero inicialmente
    }
    free(ptr);
    return 0;
}
    
    
    