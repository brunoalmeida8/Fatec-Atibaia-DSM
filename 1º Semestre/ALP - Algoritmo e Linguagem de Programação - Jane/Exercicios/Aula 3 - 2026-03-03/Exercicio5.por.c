#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float salario, aumento, salFinal, percAumento;

    printf("\nDigite seu salario: R$");
    scanf("%f", &salario);
    printf("\nDigite a porcentagem de aumento: ");
    scanf("%f", &percAumento);


    aumento = salario*(percAumento/100);
    salFinal = salario + aumento;

    printf("\nO seu aumento é de R$%.2f", aumento);
    printf("\nO seu salario com aumento é de R$%.2f", salFinal);

    return 0;
}
