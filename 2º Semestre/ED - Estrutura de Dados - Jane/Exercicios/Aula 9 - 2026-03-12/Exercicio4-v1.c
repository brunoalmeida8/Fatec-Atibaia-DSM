#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    // Método PRO: O ponteiro sabe que cada linha tem 3 colunas.
    // Ele calcula o deslocamento da linha automaticamente.
    float (*ptr)[3] = matriz;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // ptr[i][j] acessa diretamente como se fosse matriz[i][j]
            printf("Valor: %.2f\t Endereco: %p |\t",ptr[i][j], &ptr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}