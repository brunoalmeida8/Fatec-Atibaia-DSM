#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL,"Portuguese");

   char ch='A';
   char *ptr;

   ptr = &ch;

   printf("Valor de ch: %c ",ch);
   printf("\nValor de *ptr (ponteiro): %p ",ptr);


   printf("\n\n***Outro exemplo***");
   int a=5, b=7;
   int *ptr1 = NULL;

   ptr1 = &a;

   printf("\nValor de a: %d",a);
   printf("\nValor da variável apontada por *ptr1:%d",*ptr1);                      //Apresentado o valor da variavel apontada
   printf("\nValor de *ptr1: %p",ptr1);

   printf("\n\n***Alterando valores***");
   ptr1 = &b;
   printf("\nValor de b: %d",b);
   printf("\nValor de *ptr1 (ponteiro): %p",ptr1);
   printf("\nValor da variável apontada por *ptr1:%d",*ptr1);

   printf("\n\n***Depois da alteração***");
   *ptr1 = 20;
   printf("\nValor de b: %d",b);
   printf("\nValor de *ptr1 (ponteiro): %p",ptr1);
   printf("\nValor da variável apontado por *ptr1: %d",*ptr1);

   return 0;
}
