#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float peso, pGordo, pMagro;

    printf("Digite o seu peso em kg: ");
    scanf("%f", &peso);

    pGordo = peso * 1.15;
    pMagro = peso * 0.80;

    printf("\nSe voce engordar 15%% voce ficara com: %.2fKg", pGordo);
    printf("\nSe voce emagrecer 20%% voce ficara com: %.2fKg", pMagro);

    return 0;
}
