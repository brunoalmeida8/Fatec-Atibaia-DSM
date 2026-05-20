#include <stdio.h>
#include <locale.h>
void linha(int x){
    int i;
    for (i=1;i<=x;i++)
        putchar('*');
    putchar('\n');
}

void main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    linha(20);
    puts("Números entre 1 e 5");
    linha(10);
    for (i=1;i<=5;i++)
        printf("%d\n",i);
    linha(50);
}



