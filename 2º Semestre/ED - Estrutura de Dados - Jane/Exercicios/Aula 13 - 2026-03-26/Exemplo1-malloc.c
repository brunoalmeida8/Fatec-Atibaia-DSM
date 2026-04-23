#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int *ptr;

    ptr = (int*) malloc(10 * sizeof(int)); //Aloca memoria para 10 inteiros
    //nesse caso malloc esta armazenando na memoria um
    //espaço contiguo, entao podemos acessar os espaçoes como a um vetor

    //cast
    //float *ptr1 = (float*) malloc(sizeof(float)); 
    //o (float* para converter o return de void "padrao" para tipo float pq o meu ponteiro
    //é do tipo float)

    if (ptr == NULL) {
        printf("Falha na alocação de memoria.\n");
        return 1; //1 para diferenciar do sem erro (0)
    }
    // Usar a memoria alocada
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = i;
        printf("%d ", ptr[i]);
    }

    //liberar a memoria alocada
    //nao libera automaticomo como na estatica
    free(ptr);

    return 0;
    


}