#include<stdio.h>
//#include<locale.h>
#include<windows.h>//Biblioteca mágica para o Windows  (acentos)


int main()
{
    SetConsoleOutputCP(65001);// Força o terminal a usar UTF-8 (o mesmo do VS Code) -> <windows.h>
    char estado;
    
    printf("Digite o estado civil c, d, s ou v: ");
    scanf("%c", &estado);

    switch (estado)
    {
    case 'c': printf("Casado");
        break;
    case 'd': printf("Divorciado");
        break;
    case 's': printf("Solteiro");
        break;
    case 'v': printf("Viuvo");
        break;
    default: printf("estado civel nao identificado");
        break;
    }

    return 0;
}
