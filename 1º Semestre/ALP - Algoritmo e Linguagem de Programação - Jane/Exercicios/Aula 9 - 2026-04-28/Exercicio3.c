#include<stdio.h>
//#include<locale.h>
#include<windows.h>//Biblioteca mágica para o Windows  (acentos)


int main()
{
    SetConsoleOutputCP(65001);// Força o terminal a usar UTF-8 (o mesmo do VS Code) -> <windows.h>
    float num;
    int i = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%f", &num);

/*    
    for (int i = 0; i <= 10; i++)
    {
        printf("%.0f x %d = %.0f\n", num, i, (num*i));
    }
*/    




while (i <= 10)
{
    printf("%.0f x %d = %.0f\n", num, i, (num*i));
    i++;
}

    
do
{
    /* code */
} while (i < 10);


    
    return 0;
}