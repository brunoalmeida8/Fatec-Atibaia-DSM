#include <stdio.h>
#include <locale.h>



int main()
{
    setlocale(LC_ALL, "portuguese");

    int a;
    int *aptr;

    a = 7;

    aptr = &a;

    printf("O endereço de a é %p"
           "\nO valor de aptr é %p",&a, aptr);

    printf("\nO valor de a é %d"
           "\nO valor de aptr é %d",a, *aptr);

    printf("\n\n Mostrando que * e & são complementos um"
           "do outro\n&*aptr = %p"
           "\n*&aptr = %p\n", &*aptr, *&aptr);


    return 0;

}
