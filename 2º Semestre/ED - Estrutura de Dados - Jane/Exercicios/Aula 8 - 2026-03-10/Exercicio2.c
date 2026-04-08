#include<stdio.h>
#include<locale.h>

void incrementar(int *num)
{
    *num = *num + 1;
}

void dobrar(int *num)
{
    *num = *num * 2;
}



int main ()
{
    setlocale(LC_ALL, "portuguese");

    int numero = 5;

    printf("Valor inicial: %d\n", numero);

    incrementar(&numero);
    printf("Valor apos imcrementar 1: %d\n", numero);

    dobrar(&numero);
    printf("Valor apos dobrar: %d", numero);

    return 0;
}