#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int *ptr;

    ptr = (int*) malloc(5 * sizeof(int));//Aloca memoria para 5 inteiros

    if (ptr == NULL)
    {
        printf("Falha na realocação da memoria.\n");
        return 1;
    }

    //Usar a memoria alocada
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i;
    }

    //redimensionar a memoria para 10 inteiros
    ptr = (int*) realloc(ptr, 10 * sizeof(int));
    if (ptr == NULL)
    {
        printf("Falha na realocação de memoria.\n");
        return 1;
    }

    //Usar a memoria redimensionada
    for (int i = 5; i < 10; i++)
    {
        ptr[i] = i;
    }

    free(ptr);
    return 0;
}
    
    
    