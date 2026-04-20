#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    // Método MATEMÁTICO: O ponteiro aponta apenas para o primeiro float (início).
    // Começamos em &matriz[0][0] (ou apenas matriz).
    float *ptr = &matriz[0][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // Cálculo manual: (i * total_de_colunas + j)
            // *(ptr + ...) desreferencia para pegar o valor
            // (ptr + ...) pega o endereço
            printf("Valor: %.2f\t Endereco: %p |\t", *(ptr + (i * 3 + j)), (ptr + (i * 3 + j)));
        }
        printf("\n");
    }
    

    return 0;
}