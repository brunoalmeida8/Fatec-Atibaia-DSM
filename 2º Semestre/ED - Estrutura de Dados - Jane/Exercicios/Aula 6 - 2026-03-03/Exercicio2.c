#include<stdio.h>
#include<locale.h>

int calcularRaiz(int numero)
{
    if (numero == 0)
    {
        return 0;
    }
    
    for (int i = 0; i * i <= numero; i++)
    {
        if (i * i == numero)
        {
            return 1;
        }

    }
    return 0;    
}


int main()
{
    int num, resul;
    setlocale(LC_ALL, "portuguese");
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    resul = calcularRaiz(num);

    if (resul==1)
    {
        printf ("\nO retorno é %d.\n%d tem raiz exata", resul, num);
    }
    else
    {
        printf("\nO retorno é %d.\n%d nao tem raiz exata", resul, num);
    }
    

    return 0;
}
