#include <stdio.h>
#include "calculadora.h"

int main()
{
    int resultado;

    resultado = somar(10, 20);

    printf("Resultado: %d\n", resultado);

    return 0;
}


int somar(int a, int b)
{
    return a + b;
}
