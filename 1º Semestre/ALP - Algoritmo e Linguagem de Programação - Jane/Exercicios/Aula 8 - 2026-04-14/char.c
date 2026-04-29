#include<stdio.h>
#include<locale.h>


 main()
{
    setlocale(LC_ALL, "portuguese");

    int y;
    char x;//tipo caracter 'a' somente um não existe string em C ai usa char[]
/*
    printf("Digite um valor: ");
    //scanf("%c", &x);
    x = getchar(); //para char funciona assim tbm com getchar()
*/
    printf("Digite um numero int: ");
    scanf("%d", &y);

    printf("Digite um caracter char: ");
    scanf(" %c", &x); // limpa o buffer do teclado quando digita enter la em cima
        //scanf("%c*%c", &c); tbm funciona

    printf("\nValor digitado: %c", x);

}