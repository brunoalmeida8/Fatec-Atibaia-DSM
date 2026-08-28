#include<stdio.h>
#include<stdlib.h>
//#include<locale.h>//usar essa ou a <windows.h>
#include<windows.h>//Biblioteca mágica para o Windows  (acentos)


int main()
{
    //setlocale(LC_ALL, "Portuguese");//usar isso ou o de baixo pq da conflito
    SetConsoleOutputCP(65001);// Força o terminal a usar UTF-8 (o mesmo do VS Code) -> <windows.h>

    int variavel1, variavel2;
    int *p1 = variavel1, *p2 = variavel2;

    
    if (p1 > p2)
    {
        printf("p1 > p2");
        printf("%p \t %p", p1, p2);
    }

    if (p1 < p2)
    {
        printf("p1 < p2");
    }
    


    return 0;   
}