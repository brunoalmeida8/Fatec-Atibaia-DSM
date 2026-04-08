#include<stdio.h>
#include<locale.h>

void main ()
{
    setlocale(LC_ALL, "portuguese");
    int nota1, nota2;
    float media;
    printf ("Digite a primeira nota: ");
    scanf ("%d", &nota1);
    printf ("Digite a segunda nota: ");
    scanf ("%d", &nota2);

    media = (nota1+nota2)/2.0;

    if (media >= 6)
    {
        printf ("Aprovado com media = %.2f", media);

    }
    else
    {
        printf ("Reprovado com media = %.2f", media);
    }


    return;
}
