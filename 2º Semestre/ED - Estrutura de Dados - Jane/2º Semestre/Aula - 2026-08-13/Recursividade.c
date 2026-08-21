#include <stdio.h>
#include <locale.h>

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {

    setlocale(LC_ALL,"Portuguese");
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Fatorial não definido para números negativos.\n");
    } else {
        printf("Fatorial de %d é %d\n", numero, fatorial(numero));
    }

    return 0;
}
