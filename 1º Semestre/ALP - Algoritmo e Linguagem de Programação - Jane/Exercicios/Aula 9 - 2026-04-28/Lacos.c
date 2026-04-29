#include<stdio.h>
//#include<locale.h>
#include<windows.h>//Biblioteca mágica para o Windows  (acentos)

int main()
{
    SetConsoleOutputCP(65001);// Força o terminal a usar UTF-8 (o mesmo do VS Code) -> <windows.h>
    int a, cont = 0;

    printf("==Laco for ==");
    for (a = 10; a >= 1; a=a-2)
    {
        if (a==5){
            //continue;// pula a iteração e continua o laço. para nessa linha e volta para o for()
            //break;// para o laço e cai fora
        }
        printf("\nO valor de a e: %d", a);        
    }

    char xpto = 'a';
    printf("\n\n==Laco While");
    
    while (xpto == 'a')
    {
        printf("\nO valor de cont: %d", cont);
        if (cont == 10)
            xpto = 'b';
        cont++;
    }
    printf("\n\nValor de cont depois do laco");
    printf("\n O valor de cont: %d", cont);
    
    printf("\n\n<<Laco Do/While >>");
    cont = 0;
    do
    {
        printf("\n valor de cont laco do/while: %d", cont);
        cont++;
    } while (cont < 10);
    




    return 0;
}