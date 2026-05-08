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
           // mediaponderada();
            break;

        case 3:
            printf("Saindo do programa\n\n");
            return 0;
            break;
        
        default:
            break;
            //continue;
        }
    } while (escolha != 3);
    

    return 0;
}