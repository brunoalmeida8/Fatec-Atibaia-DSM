#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int*) malloc(10 * sizeof(int));
    // Aloca memória para 10 inteiros
    //nesse caso malloc está armazenando na memoria um
    //espaço contiguo, então podemos acessar os espaços como a
    //um vetor
    if (ptr == NULL)
    {
        printf("Falha na alocação de memória.\n");
        return 1;
    }
    // Usar a memória alocada
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = i;
        printf("%d ", ptr[i]);
    }
    // Liberar a memória alocada
    free(ptr);

    return 0;
}
