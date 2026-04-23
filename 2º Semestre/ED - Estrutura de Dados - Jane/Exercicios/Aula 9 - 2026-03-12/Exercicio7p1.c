#include<stdio.h>

//Programa Percorrer array com aritmetica de ponteiro

int main()
{
    char string[50] = "bruno";
    char *ptr = string;// O ponteiro começa no 'b'

    // Enquanto o conteúdo apontado por ptr não for o fim da string ('\0')
    while (*ptr != '\0')
    {
        printf("Letra atual: %c\n", *ptr);
        ptr++;// O PULO DO GATO: Anda uma casa na memória
    }
    
    return 0;
}