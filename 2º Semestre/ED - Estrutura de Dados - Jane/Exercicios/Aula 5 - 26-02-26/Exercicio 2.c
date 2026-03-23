#include <stdio.h>
#include <locale.h>

float calculaAcrescimo(float antigo, float atual)
{
    float resultado;

    return (atual - antigo)/antigo*100;

}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float antigo, atual, acrescimo;

    printf("Digite o valor antigo do produto: ");
    scanf("%f", &antigo);
    printf("Ditite o valor atual do protudo: ");
    scanf("%f", &atual);


    acrescimo = calculaAcrescimo(antigo, atual);

    printf ("O acrescimo é de %.2f por cento", acrescimo);

    return 0;
}
