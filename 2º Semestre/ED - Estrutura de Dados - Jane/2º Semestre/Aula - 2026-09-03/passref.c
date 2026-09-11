/* Fig. 7.7: fig07_07.c
 Calcula o cubo de uma variável usando chamada por referência com argumento ponteiro */

#include <stdio.h>
#include <locale.h>

void cubeByReference( int *nPtr ); /* protótipo */

int main( void )
{
    setlocale(LC_ALL,"Portuguese");
    int number = 5;

    printf( "O valor original do número é %d", number );

    /* passa endereço do número a cubeByReference */
    cubeByReference( &number );

    printf( "\nO novo valor do número é %d\n", number );
    return 0;
}

 /* calcula cubo de *nPtr; modifica variável number em main */
void cubeByReference( int *nPtr )
{
    *nPtr = *nPtr * *nPtr * *nPtr; /* cubo de *nPtr */
}
