#include<stdio.h>
#include<locale.h>


int main ()
{
    setlocale(LC_ALL, "portuguese");

    int x = 10;
    int *ptr1 = &x;
    int **ptr2 = &ptr1;

    printf("<< Ponteiro 1>>");
    printf("\nEndereço de ptr1: %p", ptr1);
    printf("\nConteudo de ptr1: %d", *ptr1);

    printf("\n\n<< Ponteiro 2>>");
    printf("\nEndereço de ptr2: %p", ptr2);
    printf("\nConteudo de *ptr2: %p", *ptr2);
    printf("\nConteudo de **ptr2: %d", **ptr2);
    printf("\n");

    return 0;

}





