#include<stdio.h>


void linha();//assinatura ou prototipo da função para usar ela depois da main kkk

void main()
{
    int i;
    linha(20);
    puts("Numeros entre 1 e 5");
    linha(20);

    for (int i = 1; i <= 5; i++)
        printf("%d\n", i);
    linha(20);
    
    return;
}

void linha (int x)
{
    int i;
    for (int i = 1; i <= x; i++)
        putchar('*');
    putchar('\n');

    return;
}