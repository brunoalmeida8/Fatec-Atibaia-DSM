#include<stdio.h>

void main()
{
    int i;
    for (int i = 1; i <= 20; i++)
        putchar('*');
    putchar('\n');

    puts("Numeros entre 1 e 5");

    for (int i = 1; i <= 20; i++)
        putchar('*');
    putchar('\n');

    for (int i = 1; i <= 5; i++)
        printf("%d\n", i);
    
    for (int i = 1; i <= 20; i++)
        putchar('*');
    putchar('\n');
    
    return;
}