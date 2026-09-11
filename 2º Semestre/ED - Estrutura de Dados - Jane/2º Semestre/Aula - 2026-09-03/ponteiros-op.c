#include <stdio.h>
#include <locale.h>
/*
int funct(int y)
{
    ++y;
    printf("%d\n",y);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x=5;

    printf("%d\n",x);
    funct(x);
    printf("%d\n",x);

    return 0;
}*/

int funct(int *y)
{
    ++(*y);
    printf("%d\n",*y);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x=5;

    printf("%d\n",x);
    funct(&x);
    printf("%d\n",x);

    return 0;
}

