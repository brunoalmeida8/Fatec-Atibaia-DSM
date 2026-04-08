#include <stdio.h>
#include <locale.h>

// FUNÇÃO VERIFICAR: Recebe um número e testa se é positivo
int verificaPositivo(int n)
{
    if (n >= 0) {
        return 1; // Se for maior ou igual a zero, retorna 1
    } else {
        return 0; // Se for menor que zero, retorna 0
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num, resultado;

    printf("Digite um número: ");
    scanf("%d", &num);

    // O 'resultado' vai guardar o 1 ou o 0 que a função devolver
    resultado = verificaPositivo(num);

    printf("O resultado da verificação é: %d", resultado);
    printf("\n(Lembre-se: 1 = Positivo / 0 = Negativo)");

    return 0;
}
