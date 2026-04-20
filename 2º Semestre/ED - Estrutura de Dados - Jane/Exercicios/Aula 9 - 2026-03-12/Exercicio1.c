#include<stdio.h>
#include<locale.h>



int main ()
{
    setlocale(LC_ALL, "portuguese");
    int var1, var2;
    int *ptr1, *ptr2, *ptrMaior;

    ptr1 = &var1;
    ptr2 = &var2;

    printf("\nO endereço de var1: %p", ptr1);
    printf("\nO endereço de var2: %p", ptr2);

    if (ptr1 > ptr2){
        ptrMaior = ptr1;
    }
    else{
        ptrMaior = ptr2;
    }

    printf("\nO maior endereço: %p", ptrMaior);

    return 0;
}

