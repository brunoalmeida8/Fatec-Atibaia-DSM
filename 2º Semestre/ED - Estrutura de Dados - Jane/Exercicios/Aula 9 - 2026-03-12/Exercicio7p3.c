#include<stdio.h>

//Programa que compara todas as letras
//primeira com a primeira, seg com a seg...
//até o final da char busca[]

int main()
{
    char texto[50] = "bruno";
    char busca[50] = "bruna";// Vamos procurar "bruna" no começo de "bruno"

    char *ptr1 = texto;
    char *ptr2 = busca;

    // Enquanto não chegarmos no fim da palavra que estamos procurando
    while (*ptr2 != '\0')
    {
        // Se as letras forem diferentes, já sabemos que não é igual!
        if (*ptr1 != *ptr2)
        {
            printf("Letra %c diferente de %c\n", *ptr1, *ptr2);
            return 0;// Termina o programa aqui mesmo
        }
        
        // Se forem iguais, avança os ponteiros (o "pulo do gato" que você já sabe!)
        printf("Letra %c igual a %c\n", *ptr1, *ptr2);
        ptr1++;
        ptr2++;
        
    }
    
    return 0;
}