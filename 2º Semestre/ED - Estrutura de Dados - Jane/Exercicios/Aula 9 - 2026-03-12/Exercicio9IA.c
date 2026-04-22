#include <stdio.h>

// A função recebe o endereço base (ponteiro) e o tamanho do vetor
void imprimirVetor(int *ptr, int tamanho) 
{
    // O 'ptr' aqui é uma variável local que aponta para o começo do vetor.
    // Como é uma variável, podemos incrementá-la sem medo!
    for (int i = 0; i < tamanho; i++) 
    {
        // Aqui usamos o '*' para acessar o valor onde o ponteiro aponta.
        printf("Valor: %d\n", *ptr);
        
        // Aritmética de ponteiros: avançamos para a próxima posição de memória
        ptr++; 
    }
}

int main() 
{
    int meuVetor[] = {10, 20, 30, 40, 50};
    int tam = 5;

    // Passamos o endereço inicial do vetor (o nome do vetor)
    imprimirVetor(meuVetor, tam);

    return 0;
}