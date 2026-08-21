#include <stdio.h>

void xpto(int num)
{
    int i;
    for (i=1;i<=num;i++)
        putchar('*');
    putchar('\n');

    return;

}

int main()
{
    int i;

    xpto(20);
    puts("Números entre 1 e 5");

    xpto(50);
     for (i=1;i<=5;i++)
        printf("%d\n",i);

    xpto(10);

    return 0;
}

