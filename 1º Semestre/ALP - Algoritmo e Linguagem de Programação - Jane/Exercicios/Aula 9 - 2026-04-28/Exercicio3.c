#include<stdio.h>
//#include<locale.h>
#include<windows.h>//Biblioteca mágica para o Windows  (acentos)

void tabuadaFor(float num)
{
    printf("\n\n===Tabuada com For===\n\n");
    for (int i = 0; i <= 10; i++)
    {
        printf("%.0f x %d = %.0f\n", num, i, (num*i));
    }
}


void tabuadaWhile(float num, int i)
{
    printf("\n\n===Tabuada com While===\n\n");
    while (i <= 10)
    {
        printf("%.0f x %d = %.0f\n", num, i, (num*i));
        i++;
    }
}

void tabuadaDoWhile(float num, int i)
{
    printf("\n\n===Tabuada com Do/While===\n\n");
    do
    {
        printf("%.0f x %d = %.0f\n", num, i, (num*i));
        i++;
    } while (i <= 10);
}


int main()
{
    SetConsoleOutputCP(65001);// Força o terminal a usar UTF-8 (o mesmo do VS Code) -> <windows.h>
    float num;
    int i = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%f", &num);

    tabuadaFor(num);
    tabuadaWhile(num, i);
    tabuadaDoWhile(num, i);
    
    return 0;
}