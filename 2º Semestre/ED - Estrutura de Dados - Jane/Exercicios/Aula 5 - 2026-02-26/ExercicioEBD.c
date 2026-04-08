#include <stdio.h>
#include <locale.h>

void procedimento(int valor)
{
    printf("O valor é: %d \n ", valor);
    if (valor >= 5){
        printf("O valor %d é maior que 5 \n", valor);
    }
    else {
        printf("O valor %d é menor que 5 \n", valor);
    }
}


int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;
    printf("Digite um numero: \n");
    scanf("%d", &numero);
    procedimento(numero);

    return 0;
}
