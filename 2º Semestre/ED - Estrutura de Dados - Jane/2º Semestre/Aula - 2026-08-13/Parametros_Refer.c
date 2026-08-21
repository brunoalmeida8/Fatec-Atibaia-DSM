#include <stdio.h>
#include <locale.h>

void soma_mais_um(int *n)
{
    *n = *n + 1;
    printf("\nValor dentro da função: %d",*n);
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int x = 5;
    printf("\nAntes da função x= %d",x);
    soma_mais_um(&x);
    printf("\nDepois da função x= %d",x);

    return 0;
}
