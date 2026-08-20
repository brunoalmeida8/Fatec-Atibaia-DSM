#include<stdio.h>

int main ()
{
    char nome[10];
    int altura, idade;
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);//fgets (nome, tamanho, local do input - "stdin = teclado")
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu altura cm: ");
    scanf("%d", &altura);

    printf("\n\n==========================\n");
    printf("Dados formatados");
    printf("\n==========================\n");
    printf("\nNome: %s \tIdade: %d \tAltura: %d\n\n", nome, idade, altura);
    return 0;
}