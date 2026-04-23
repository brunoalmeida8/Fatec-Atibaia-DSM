#include <stdio.h>
#include <locale.h>



int main()
{
    setlocale(LC_ALL, "portuguese");

    int a;
    int *aptr;

    a = 7;

    aptr = &a;

    printf("O endere�o de a � %p"
           "\nO endereço de aptr � %p",&a, aptr);

    printf("\nO valor de a � %d"
           "\nO valor de aptr � %d",a, *aptr);

    printf("\n\n Mostrando que * e & s�o complementos um"
           "do outro\n&*aptr = %p"
           "\n*&aptr = %p\n", &*aptr, *&aptr);


    return 0;

}
