#include<stdio.h>

float maior(float num1, float num2, float num3)
{
    float numMaior;
    numMaior = num1;
    if (num2 > numMaior)
    {
        numMaior = num2;
    }
    if (num3 > numMaior)
    {
        numMaior = num3;
    }
    return numMaior;    
}

float menor(float num1, float num2, float num3)
{
    float numMenor;
    numMenor = num1;
    if (num2 < numMenor)
    {
        numMenor = num2;
    }
    if (num3 < numMenor)
    {
        numMenor = num3;
    }
    return numMenor;    
}

float media(float num1, float num2, float num3)
{
    float numMedia;
    numMedia = (num1 + num2 + num3) / 3;

    return numMedia;    
}

int main()
{
    float num1, num2, num3, numMaior, numMenor, numMedia;
    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);
    printf("Digite o segundo valor: ");
    scanf("%f", &num3);

    
    numMaior = maior(num1, num2, num3);
    printf("O maior valor: %.2f\n", numMaior);

    numMenor = menor(num1, num2, num3);
    printf("O menor valor: %.2f\n", numMenor);

    numMedia = media(num1, num2, num3);
    printf("A media: %.2f\n", numMedia);

    return 0;
}



    /*
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o %fº valor", i);
        scanf("%f", num[i]);
    }
    */


    