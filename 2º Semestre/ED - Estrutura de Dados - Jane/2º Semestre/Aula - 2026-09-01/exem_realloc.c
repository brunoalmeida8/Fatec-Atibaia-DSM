#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int *ptr;
    ptr = (int*) malloc(5 * sizeof(int)); // Aloca memória para 5 inteiros
    if (ptr == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }
    // Usar a memória alocada
    for (int i = 0; i < 5; i++) {
        ptr[i] = i;
    }
    // Redimensionar a memória para 10 inteiros
    ptr = (int*) realloc(ptr, 10 * sizeof(int));
    if (ptr == NULL) {
        printf("Falha na realocação de memória.\n");
        return 1;
    }
    // Usar a memória redimensionada
    for (int i = 5; i < 10; i++) {
        ptr[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", ptr[i]);
    }
    // Liberar a memória alocada
    free(ptr);

    return 0;
}
