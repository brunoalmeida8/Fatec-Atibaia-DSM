#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main()
{
    int *p; //ponteiro para inteiro
    char *s; //ponteiro para caracter
    p = (int*) malloc(4); //supomos que um numero inteiro ocupa 4 bytes
    //p = (int*) malloc(sizeof(int)); //tbm funciona
    *p = 7;
    s = (char *) malloc(20); //sumopos que cada caractere ocupa 1 byte.
    printf("Digite a string:\n");
    scanf("%s", s);
    printf("Conteudo de p=%d Conteudo de s=%s\n", *p,s);

    free(p);
    free(s);
}




