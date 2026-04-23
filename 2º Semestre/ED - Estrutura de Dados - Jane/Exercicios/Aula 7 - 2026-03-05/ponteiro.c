#include <stdio.h>

int main()
{
    int y = 5;
    int *yptr;

    yptr = &y;

    printf("%d", yptr);
    printf("\n%d", *yptr); // chamado de desreferencia��o do ponteiro ou opra�~.. indie

    return 0;
}
