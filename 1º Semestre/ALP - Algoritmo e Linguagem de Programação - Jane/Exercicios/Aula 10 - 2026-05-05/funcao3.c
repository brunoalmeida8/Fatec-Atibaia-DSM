#include<stdio.h>
#include<math.h>

int soma(int x, int y)
{
    int res;
    res = x + y;
    return res;
}

int dobro(int x)
{
    return 2*x;
}

void main()
{
    int x1, x2, total;
    double xpto;
    
    printf("Entre com dois valores: ");
    scanf("%d%d", &x1, &x2);
    total = soma(x1, x2);
    printf("\nA soma dos dois valores: %d", total);
    printf("\nO dobro do valor %d: %d",x1, dobro(x1));
    printf("\nO dobro do valor %d: %d",x2, dobro(x2));

    xpto = pow(2, 3);//pow(base, expoente)
    printf("\n2 elevado a 3: %lf", xpto);

    sqrt(x1);// raiz quadrada

    return;
}