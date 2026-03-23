#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float x, y, resul;
    int op;

    printf("Menu de opção \n");
    printf("1 - soma\n");
    printf("2 - subtração\n");
    printf("3 - multiplicação\n");
    printf("4 - divisão\n");
    printf("Escolha uma opção: ");
    scanf("%d", &op);

    printf("Ditite um valor x: ");
    scanf("%f", &x);
    printf("Ditite um valor y:");
    scanf("%f", &y);



    switch(op){
        case 1:
            resul = x+y;
            printf("o resultado da soma é: %f", resul);
            break;
        case 2:
            resul = x-y;
            printf("o resultado da subtração é: %f", resul);
            break;
        case 3:
            resul = x*y;
            printf("o resultado da multiplicação é: %f", resul);
            break;
        case 4:
            resul = x/y;
            printf("o resultado da divisão é: %f", resul);
            break;
    }

    return 0;
}
