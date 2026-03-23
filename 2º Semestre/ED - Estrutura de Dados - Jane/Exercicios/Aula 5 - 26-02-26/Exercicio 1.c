#include <stdio.h>
#include <locale.h>

// FUNÇÃO VERIFICAR: Recebe um número e testa se é positivo
char* verificaPositivo(int n)
{
    if (n >= 0) {
        return "positivo"; // Se for maior ou igual a zero, retorna 1
    } else {
        return "negativo"; // Se for menor que zero, retorna 0
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num, resultado;
    char* result;

    printf("Digite um número: ");
    scanf("%d", &num);

    // O 'resultado' vai guardar o 1 ou o 0 que a função devolver
    result = verificaPositivo(num);

    printf("O resultado da verificação é: %s", result);
    printf("\n(Lembre-se: 1 = Positivo / 0 = Negativo)");

    return 0;
}
