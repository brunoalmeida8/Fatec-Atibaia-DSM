#include<stdio.h>

//Programa compara letra por letra
//primeira com a primeria, segunda com a segundo.. até o fim ou ser diferente
//se nao achar busca[] inteira, ele avança uma casa em texto e verifica novamente

int main()
{
    char texto[50] = "bruno";
    char busca[50] = "runa";
    char *ptrInicio = texto;// Este ponteiro marca a posição atual no texto

    // O loop externo faz o ptr_inicio andar, posição por posição    
    while (*ptrInicio != '\0')
    {
        char *ptr1 = ptrInicio;// ptr1 faz uma cópia do endereço atual
        char *ptr2 = busca;// ptr2 aponta sempre para o começo da palavra busca

        // O loop interno compara letra por letra
        while (*ptr2 != '\0')
        {
            if (*ptr1 != *ptr2)
            {
                printf("Letra %c diferente de %c\n", *ptr1, *ptr2);
                break;// Se deu diferença, sai deste loop de comparação
            }
            printf("Letra %c igual a %c\n", *ptr1, *ptr2);
            ptr1++;
            ptr2++;
        }

        // O teste de sucesso:
        // Se ptr2 chegou em '\0', é porque percorremos toda a palavra busca
        // sem ter entrado no break, ou seja, achamos!
        // Se o ptr2 chegou ao final ('\0'), encontramos a palavra
        if (*ptr2 == '\0')
        {
            printf("Achamos todas as letras. String busca contida em texto");
            return 0;
        }
        
        // Se não achou, movemos a posição inicial
        ptrInicio++;// O loop externo continua e move o ptr_inicio para a próxima letra
    }

    printf("Nao achou. String busca nao contida em texto");
    return 0;
}