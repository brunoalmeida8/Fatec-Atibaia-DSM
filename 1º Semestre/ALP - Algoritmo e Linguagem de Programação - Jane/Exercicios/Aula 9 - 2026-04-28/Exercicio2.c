#include<stdio.h>
//#include<locale.h>
#include<windows.h>//Biblioteca mágica para o Windows  (acentos)


int main()
{
    SetConsoleOutputCP(65001);// Força o terminal a usar UTF-8 (o mesmo do VS Code) -> <windows.h>
    int num;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    int i = num;
    while (i >= 0)
    {
        printf("%d\n", i);
        i--;
    }
    

    
    return 0;
}