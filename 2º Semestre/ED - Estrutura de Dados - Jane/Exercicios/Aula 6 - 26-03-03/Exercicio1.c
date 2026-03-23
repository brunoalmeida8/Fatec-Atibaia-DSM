#include<stdio.h>
#include<locale.h>


void exibir()
{
    printf("******************** \n");
    printf("Anita Lopes \n");
    printf("******************** \n");
    printf("Guto Garcia \n");

    return;
}

int main(int argc, char const *argv[])
{

    setlocale(LC_ALL, "portuguese");
    exibir();

    return 0;
}
