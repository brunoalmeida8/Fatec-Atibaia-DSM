#include <stdio.h>
#include <locale.h>

// FUNÇÃO MÉDIA: Recebe 3 valores e retorna um número real (float)
float calcularMedia(float n1, float n2, float n3)
{
    float m;
    m = (n1 + n2 + n3) / 3;
    return m; // Devolve o número com vírgula para o main
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float a, b, c, mediaFinal;

    printf("Digite os 3 valores: ");
    // Usamos %f para ler e escrever números com vírgula (float)
    scanf("%f %f %f", &a, &b, &c);

    // O gerente chama a função e guarda o resultado quebrado
    mediaFinal = calcularMedia(a, b, c);

    // O %.2f serve para mostrar apenas 2 casas depois da vírgula
    printf("\nA média aritmética é: %.2f", mediaFinal);

    return 0;
}
