#include<stdio.h>

void mediaAritmetica()
{
    float valor1, valor2, media;
    printf("\n\n===Media Aritmetica\n\n");
    printf("Digite um valor: ");
    scanf("%f", &valor1);
    printf("Digite outro valor: ");
    scanf("%f", &valor2);
    media = (valor1 + valor2) / 2;
    printf("\nMedia aritmetica = %.2f", media); 
}

void mediaPonderada()
{
    float nota[3], peso[3], media, somaPesos;
    printf("\n\n===Media Aritmetica\n\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &nota[i]);
        printf("Digite o peso da nota %d: ", i + 1);
        scanf("%f", &peso[i]);
    }
    somaPesos = peso[0] + peso[1] + peso[2];
    media = ( (nota[0] * peso[0]) + (nota[1] * peso[1]) + (nota[2] * peso[2]) ) / somaPesos;
    printf("\nMedia ponderada = %.2f", media);
}

int main()
{
    int escolha;
    do
    {
        printf("\n\n===Menu de opcoes===\n\n");
        printf("1 - Media aritmetica\n");
        printf("2 - Media ponderada\n");
        printf("3 - Sair\n\n");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            mediaAritmetica();
            break;

        case 2:
            mediaPonderada();
            break;

        case 3:
            printf("Saindo do programa\n\n");
            return 0;
            break;
        
        default:
            printf("Digite um valor valido\n");
            break;
        }
    } while (escolha != 3);
    

    return 0;
}