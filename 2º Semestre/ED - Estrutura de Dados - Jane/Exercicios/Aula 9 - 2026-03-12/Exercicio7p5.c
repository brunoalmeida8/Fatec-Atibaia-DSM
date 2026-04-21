#include<stdio.h>

//programa completo com uso de função passando por referencia texto[] e busca[]
//compara letra por letra até o fim da busca[]
//se nao for igual, avança para proxima casa de texto[] e compara novamente
//retorna 1 se busca[] estiver contido em texto[] e retorna 0 se nao estiver contida

int bucarPalavra(char *texto, char *busca)
{
    char *ptrInicio = texto;

    while (*ptrInicio != '\0')
    {
        char *ptr1 = ptrInicio;
        char *ptr2 = busca;
        while (*ptr2 != '\0')
        {
            if (*ptr1 != *ptr2)
            {
                printf("Letra %c != %c\n", *ptr1, *ptr2);
                break;
            }
            
            printf("Letra %c = %c\n", *ptr1, *ptr2);

            ptr1++;
            ptr2++;
        }
        
        if (*ptr2 == '\0')
        {
            printf("Encontrada, busca contida em texto\n");
            return 1;
        }
        
        ptrInicio++;
    }
    printf("Nao encontrada, busca nao contida em texto\n");
    return 0;
}


int main()
{
    char texto[50] = "bruno";
    char busca[50] = "run";
    int resultado;
    resultado = bucarPalavra(texto, busca);
    printf("\n\nVoltamos para a main\n\n");

    if (resultado == 1)
        printf("Achamos todas as letras. String busca contida em texto\n");
    else
        printf("Nao achou. String busca nao contida em texto\n");
    

    return 0;
}