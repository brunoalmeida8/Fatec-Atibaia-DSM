#include<stdio.h>
//#include<locale.h>
#include<windows.h>//Biblioteca mágica para o Windows  (acentos)

int main()

{
    SetConsoleOutputCP(65001);// Força o terminal a usar UTF-8 (o mesmo do VS Code) -> <windows.h>
    int num, somaPar = 0, somaImpar = 0;


    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            somaPar = somaPar + num;
        } else{
            somaImpar = somaImpar + num;
        }
    }
    

    printf("A soma dos numeros pares: %d\n", somaPar);
    printf("A soma dos numeros impares: %d\n", somaImpar);

    
    
    return 0;
}