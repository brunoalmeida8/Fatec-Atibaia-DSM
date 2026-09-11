#include <stdio.h>
#include <locale.h>

// função para verificar a quantidade de caracteres no vetor
int strlen(char *s)
{
    char *ptr = s;
    while (*s != '\0')
        s++;
    return (int) (s-ptr);
}

int main()
{
    char nome[100];
    printf("Insira uma string: ");
    gets(nome);

    printf("%d \n", strlen(nome));

    return 0;
}
