#include <stdio.h>
#include <locale.h>

float calculaMedia(int n1, int n2, int n3)
{
    char escolha;
    float media = 0;

    printf("Selecione a opcao: \n");
    printf("A- Media Aritmetica\n");
    printf("B- Media Ponderada\n");
    scanf(" %c", &escolha);

    switch(escolha)
    {
        case 'A':
            media = (n1 + n2 + n3) / 3.0;
            break;
        case 'B':
            media = ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10.0;
            break;
    }
    return media;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, n3;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%d", &n1);
    printf("Digite a segunda nota: ");
    scanf("%d", &n2);
    printf("Digite a terceira nota: ");
    scanf("%d", &n3);

    media = calculaMedia(n1, n2, n3);

    printf("A media e igual a: %.2f", media);

    return 0;
}
