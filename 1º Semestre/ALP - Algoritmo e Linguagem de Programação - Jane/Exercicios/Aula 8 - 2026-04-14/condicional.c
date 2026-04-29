#include<stdio.h>
#include<locale.h>


 main()
{
    setlocale(LC_ALL, "portuguese");

    int y;

    printf("Digite um valor: ");
    scanf("%d", &y);

/* condicional simples e composto com uma instrução
    if (y > 10)
        puts("Valor maior que 10");
    else 
        if (y == 10)
            puts("Valor igual a 10");
        else
            puts("Valor menor que 10");
*/    

    //Condicional com mais de uma instrução
    if (y > 10)
    {// se nao tiver na {} ele considera só a primeira instrução
        puts("Valor digitado maior que 10");
        puts("Segunda instrução");
    }else 
    if (y < 10)
    {
        puts("Valor digitado menor que 10");
        puts("Segunda instrução");
    }else
    {
        puts("Valor digitado = 10");
        puts("Segunda instrução");
    }
}