#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");

    int a,cont=0;

    printf("== Laco for ==");
    for (a=10;a>=1;a=a-2)
    {
        //if (a==5)
         //   break;
          printf("\no valor de a é: %d",a);
    }

    char xpto = 'a';
    printf("\n\nLaco While");

    while (xpto == 'a')
    {
        printf("\n O valor de cont:%d",cont);
        if (cont == 10)
            xpto = 'b';
        cont++;  //cont = cont + 1;
    }
    printf("\n\nValor de cont depois do laco");
    printf("\n O valor de cont:%d",cont);


    printf("\n\n<< Laço Do/While >>");
    cont=0;
    do
    {
        printf("\n valor de cont laco do/while: %d",cont);
        cont++;
    } while (cont<10);


    return 0;
}
