#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int*) calloc(10, sizeof(int));
    // Aloca memória para 10 inteiros e inicializa com zero

    if (ptr == NULL)
    {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    // Usar a memória alocada
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", ptr[i]); // Todos os valores serão zero inicialmente
    }

    // Liberar a memória alocada
    free(ptr);

    return 0;
}
