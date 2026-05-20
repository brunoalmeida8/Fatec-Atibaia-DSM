#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float xpto;
    printf("Entre com um valor ");
    scanf("%f",&xpto);

    printf("\n<<<<< Condicional simples ===============\n");
    if (xpto >= 0)
        printf("Valor positivo\n");


    printf("\n======== Condicional Composto ==============\n");
    if (xpto >= 0)
        printf("Valor positivo\n");
    else
        printf("Valor negativo\n");

    int x = 0;
    printf("Entre com um valor ");
    scanf("%d",&x);
    printf("\n======= Condicional Composto com mais de 1 instrução");
    if (xpto >= 0)
    {
        printf("Valor positivo\n");
        printf("Você digitou o valor %d",xpto);
    }
    else
    {
        printf("Valor negativo\n");
        printf("Você digitou o valor %d",xpto);
    }

    if (xpto>10 && xpto<50) // E condicional
        printf("Valor entre 10 e 50");

    if (xpto==0 || xpto>10)  //OU condicional
        printf("Entrou");

    if (!xpto==0)      // negação
        printf("Diferente de zero");

    // operador ternario
    xpto = xpto>10? xpto+20:xpto-10;
    printf("%d",xpto);

    if (xpto > 10)
        printf("Acima de dez");
    else
    {
        if (xpto > 0)
           printf("Maior que zero");
        else
           printf("Menor que zero");
    }

    if (x <= 50)
        printf("Valor Barato");
    else
    {
       if (x < 120)
         printf("Valor normal");
       else
         printf("Valor Caro");
    }

    char estado;

    printf("Digite o estado civil c, d, s ou v: ");
    scanf("%c",&estado);

    switch(estado)
    {
        case 'c':printf("Casado");
                 break;
        case 'd':printf("Divorciado");
                 break;
        case 's':printf("solteiro");
                 break;
        case 'v':printf("viúvo");
                 break;
        default: printf("estado civil não identificado");
    }

    return 0;
}
