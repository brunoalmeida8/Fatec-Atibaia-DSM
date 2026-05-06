#include<stdio.h>
#include<math.h>

double seila(double r)
{
    double v;
    v =  (double)4/3 * M_PI * pow(r,3); // usar o cast (double) pq ele entende o inteiro de 4/3
    return v;
}

int main ()
{
    double r;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &r);

    printf("O volume da esfera: %lf", seila(r));
    
    return 0;
}