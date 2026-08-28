#include<stdio.h>
#include<stdlib.h>
//#include<locale.h>//usar essa ou a <windows.h>
#include<windows.h>//Biblioteca mágica para o Windows  (acentos)

int main()
{
    //setlocale(LC_ALL, "Portuguese");//usar isso ou o de baixo pq da conflito
    SetConsoleOutputCP(65001);// Força o terminal a usar UTF-8 (o mesmo do VS Code) -> <windows.h>
    printf("========================================");
    printf("\nTamamho dos tipos de dados");
    printf("\n========================================\n\n");

    printf("Char:   %zu byte(s)\n", sizeof(char));
    printf("Int:    %zu byte(s)\n", sizeof(int));
    printf("Float:  %zu byte(s)\n", sizeof(float));
    printf("Double: %zu byte(s)\n", sizeof(double));

    return 0;   
}