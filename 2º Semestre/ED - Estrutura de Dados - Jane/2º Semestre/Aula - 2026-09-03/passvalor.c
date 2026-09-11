/* Fig. 7.6: fig07_06.c
 Cubo de uma variável usando chamada por valor */

#include <stdio.h>
#include <locale.h>

int cubeByValue( int n ); /* protótipo */

int main( void )
{
    setlocale(LC_ALL, "Portuguese");

    int number = 5;

    printf("O valor original do número é %d", number );

    /* passa número por valor a cubeByValue */
    number = cubeByValue( number );

    printf("\nO novo valor do número é %d\n", number );

return 0; /* indica conclusão bem-sucedida */
}


 /* calcula e retorna cubo do argumento inteiro */
int cubeByValue( int n )
{
    return n * n * n;
}
