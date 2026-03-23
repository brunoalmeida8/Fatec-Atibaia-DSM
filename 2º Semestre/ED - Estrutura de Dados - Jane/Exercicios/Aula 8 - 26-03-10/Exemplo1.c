#include<stdio.h>
#include<locale.h>




int main ()
{
    setlocale(LC_ALL, "portuguese");

    int x = 5, *px = &x;

    printf("Numero em bytes do tipo int: %d\n\n", sizeof(int));

    printf("\nValor base:    %d %p\n\n", x, px);
    printf("Incremento em 1: %d %p\n", x+1, px+1);
    printf("Incremento em 2: %d %p\n", x+2, px+2);

    printf("\nDecremento em 2: %d %p\n", x-2, px-2);

    //sequencia dos hexadecimais (base 16): 0 1 2 3 4 5 6 7 8 9 A B C D E F

    return 0;
}

