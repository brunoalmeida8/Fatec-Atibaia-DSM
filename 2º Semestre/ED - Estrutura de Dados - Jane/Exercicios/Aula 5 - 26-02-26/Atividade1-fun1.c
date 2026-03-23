#include <stdio.h>
#include <locale.h>

int menu ()
{
    setlocale(LC_ALL, "Portuguese");
    int op;

    printf("Menu de opção \n");
    printf("1 - soma\n");
    printf("2 - subtração\n");
    printf("3 - multiplicação\n");
    printf("4 - divisão\n");
    printf("Escolha uma opção: ");
    scanf("%d", &op);

    return op;

}



int main()
{
    int escolha;
    float x, y, resul;
    escolha = menu ();


    printf("Ditite um valor x: ");
    scanf("%f", &x);
    printf("Ditite um valor y:");
    scanf("%f", &y);


    switch(escolha){
        case 1:
            resul = x+y;
            break;
        case 2:
            resul = x-y;
            break;
        case 3:
            resul = x*y;
            break;
        case 4:
            resul = x/y;
            break;
    }

    printf("o resultado da operação é: %f", resul);


    return 0;
}
