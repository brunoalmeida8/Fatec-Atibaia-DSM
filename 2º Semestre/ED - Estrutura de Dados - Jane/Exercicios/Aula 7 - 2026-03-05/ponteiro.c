#include <stdio.h>

int main()
{
    int y = 5;
    int *yptr;

    yptr = &y;

    printf("%d", yptr);
    printf("\n%d", *yptr); // chamado de desreferenciação do ponteiro ou opraç~.. indie

    return 0;
}
