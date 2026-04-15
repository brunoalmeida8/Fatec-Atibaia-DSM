#include<stdio.h>
//#include<locale.h>
#include<windows.h>//Biblioteca mágica para o Windows  (acentos)



int main()
{
    //setlocale(LC_ALL, "Portuguese");
    SetConsoleOutputCP(65001);// Força o terminal a usar UTF-8 (o mesmo do VS Code) -> <windows.h>

    int x, y, z; // criaçao/declaração de 3 variaveis inteiras
        //unsigned int -> para ser só positivo

    printf("Digite um valor: ");
    scanf("%d", &x);

    puts("Digite outro valor: ");//é um printf só para caracter e pula linha automatica
    scanf("%d", &y);

    z = x + y;//z <- x + y
    printf ("A soma é: %d\n", z);// escreva A soma é: ", z

    z = x - y;//z <- x - y
    printf ("A subtração é: %d\n", z);// escreva A subtração é: ", z

    z = x / y;//z <- x - y
    printf ("A divisão é: %d\n", z);// 

    z = x * y;//z <- x - y
    printf ("A multiplicação é: %d\n", z);// 

    z = x % y;//resto da d divisão ... só funciona para int ... z <- x "não lembro kkk" y
    printf ("O resto é: %d\n", z);// 



    /*
        printf("Hello World");
        printf("Pula uma linha - \n");
        printf("Bip - \7 ou \a");
        printf("Da um tab - \t");
        printf("\nc:\\windows\\");
        printf("Texto \'qualquer\' semç criatividade d\'agua");
    */
}
/*
\n - pula uma linha
\7 ou \a - Bip
\t - Tab
\ - para transformar o proximo caractere em somente caractere kk exibir o \n 
*/