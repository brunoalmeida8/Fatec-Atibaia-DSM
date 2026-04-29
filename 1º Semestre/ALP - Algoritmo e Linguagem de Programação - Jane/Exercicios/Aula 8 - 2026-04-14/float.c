#include<stdio.h>
#include<locale.h>


 main()
{
    setlocale(LC_ALL, "portuguese");

    float x;//tipo real " 6 casas decimais" 1,123456


    printf("Digite um valor: "); //escreva "Digite um valor: "
    scanf("%f", &x);// leia x

    printf("\nValor digitado: %f", x);//escreva "Valor digitado: ", x
        //se usar %.2f ele trunca (não arredonda) na vdd ele arredonda (não trunca)

}