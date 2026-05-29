#include <stdio.h>

int main() {
    long int value1 = 200000;
    long int value2;

    long *ptr1;

    ptr1 = &value1;
    printf("b) Valor apontado por ptr1: %d\n", *ptr1);

    value2 = *ptr1;
    printf("c) Valor de value2: %ld\n", value2);

    printf("d) Endereco de value1: %p\n", &value1);
    printf("d) Endereco em ptr1:   %p\n", ptr1);

    if (&value1 == ptr1)
    {
        printf("\n\nd) sim, valores impressos sao iguais");
    } else
    {
        printf("\n\nd) nao, valores impressos sao diferentes");
    }
    
    return 0;
}
