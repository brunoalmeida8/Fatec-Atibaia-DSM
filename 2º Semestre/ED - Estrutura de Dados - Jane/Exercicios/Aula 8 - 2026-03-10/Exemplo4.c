#include<stdio.h>
#include<locale.h>


int strlen (char *s)
{
    char *ptr =s;

    while (*s != '\0')
        s++;
    return (int) (s-ptr);
}

int main ()
{
    setlocale(LC_ALL, "portuguese");


    char nome [100];
    printf("Insira uma stringg: ");
    gets(nome);

    printf("%d \n", strlen(nome));

    return 0;

}



