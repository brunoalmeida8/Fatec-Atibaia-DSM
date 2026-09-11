#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int x = 5, y = 7,*ptr1 = &x,*ptr2 = &x;

    printf("Número de bytes do tipo int: %d\n\n",sizeof(int));

    printf("Ponteiro 1: %p\n",ptr1);
    printf("Ponteiro 2: %p\n",ptr2);


    printf("<< Comparação entre ponteiros >>");

    if (ptr1 > ptr2)
        printf("\n\nptr1 maior\n");
    else
        printf("\n\nptr2 maior\n");

    if (ptr1 == ptr2)
        printf("\nPonteiros Iguais\n");
    else
        printf("\nPonteiros Diferentes\n");

    return 0;

}
