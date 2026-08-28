#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a;
    int *aPtr;

    a = 7;
    aPtr = &a;

    printf("O endereço de a é %p"
    "\nO valor de aPrt é %p", &a, aPtr);

    printf("\n\nO valor de a é %d"
    "\nO valor de *Ptr é %d", a, *aPtr);

    printf("\n\nMostrando que * e & são complementos um"
        "do outro\n&*aPtr - %p"
    "\n*aPrt = %p\n", &*aPtr, *&aPtr);

    return 0;
}