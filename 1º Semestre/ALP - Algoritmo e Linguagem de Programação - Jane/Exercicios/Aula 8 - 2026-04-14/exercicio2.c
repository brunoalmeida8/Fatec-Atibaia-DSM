#include<stdio.h>

int main()
{
    float salLiq, salBruto, imposto;

    if (salBruto < 1000)
    {
        imposto = 5/100;
    } else if (salBruto >= 1000 && salBruto < 5000)
    {
        imposto = 11/100
    } else{
        imposto = 35/100
    }
        
}
