#include <stdio.h>
#include <locale.h>
void xpto()
{
    int i;
    for (i=1;i<=30;i++)
        putchar('*');
    putchar('\n');
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    xpto();
    puts("Números entre 1 e 5");
    xpto();
    for (i=1;i<=5;i++)
        printf("%d\n",i);
    xpto();
    return 0;
}

