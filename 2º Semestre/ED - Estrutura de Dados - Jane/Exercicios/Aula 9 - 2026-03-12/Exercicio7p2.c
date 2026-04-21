#include<stdio.h>

//Programa compara a primeira letra com a primeira
//e depois a segunda letra com a segunda


int main()
{
    char texto[50] = "bruno";
    char busca[50] = "bola";
    char *ptr1 = texto;// aponta para 'b' de bruno
    char *ptr2 = busca;// aponta para 'b' de bola


    // Vamos comparar apenas a primeira letra usando os ponteiros
    if (*ptr1 == *ptr2) {
        printf("Primeira letra %c igual a %c\n", *ptr1, *ptr2);
    } else {
        printf("Primeira letra %c diferente de %c\n", *ptr1, *ptr2);
    }

    // Agora, vamos avançar os ponteiros para a SEGUNDA letra
    ptr1++; // agora aponta para 'r'
    ptr2++; // agora aponta para 'o'

    // Vamos comparar a segunda letra
    if (*ptr1 == *ptr2) {
        printf("Segunda letra %c igual a %c\n", *ptr1, *ptr2);
    } else {
        printf("Segunda letra %c diferente de %c\n", *ptr1, *ptr2);
    }

    return 0;
}