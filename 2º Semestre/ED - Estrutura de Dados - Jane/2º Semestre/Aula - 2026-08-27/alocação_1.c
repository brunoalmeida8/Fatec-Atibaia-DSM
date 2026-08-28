#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int *p;
    char *s;

    p = (int*) malloc(sizeof(int));

    *p = 7;

    s = (char*) malloc(sizeof(char));

    printf("Digite uma string: \n");
    scanf("%s",s);

    printf("Conteúdo de p=%d",*p);
    printf("\nConteudo de s=%c\n",*s);


    free(p);
    free(s);

    return 0;
}
