#include<stdio.h>
#include<windows.h>

char verificar(char string1[], char string2[])
{
    if (string2 == string1)
    {
        return 's';
    } else {
        return 'n';
    }   
}



int main ()
{
    SetConsoleOutputCP(65001);

    char string1[50] = "bruno de paula almeida", string2[50] = "bruno", retorno;
 
    retorno = verificar(string1, string2);

    printf("Esta contida: %c", retorno);

    return 0;
}