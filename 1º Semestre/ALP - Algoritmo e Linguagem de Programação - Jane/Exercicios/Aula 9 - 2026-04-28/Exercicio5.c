#include<stdio.h>

int main()
{
    int idade, cont = 0, soma = 0;
    float media;

    
    do
    {
        printf("Digite uma idade, ou zero para encerrar: ");
        scanf("%d", &idade);
        if (idade)//se idade diferente de zero        
        {
            cont++;
            soma = soma + idade;
        }    

    } while (idade != 0);

    if (!cont)//se cont nao for diferente de zero (se for zero - se nenhuma idade foi digitada)
    {
        printf("Nenhuma idade digitada para mostrar a media\n");
        printf("Nao se pode calcular a media pois nao existe divisao por zero\n");
        return 1;
    }
    media = (float)soma / cont;
    
    printf("A media das idades: %.2f", media);
    return 0;
}