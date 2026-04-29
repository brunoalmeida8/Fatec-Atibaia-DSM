#include<stdio.h>
//#include<locale.h>
#include<windows.h>//Biblioteca mágica para o Windows  (acentos)


int main()
{
    //SetConsoleOutputCP(65001);// Força o terminal a usar UTF-8 (o mesmo do VS Code) -> <windows.h>
    int num;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("%d", i);
    }
    
    return 0;
}