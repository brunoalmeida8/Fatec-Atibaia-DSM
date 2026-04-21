#include<stdio.h>
#include<windows.h>

// 1. Função que só checa: "Começando desse ponto (ptr1), a string2 está aqui?"
char checaIgualdade(char *ptr1, char *ptr2) {
    while (*ptr2 != '\0') { // Enquanto não chegar no fim da string2
        if (*ptr1 != *ptr2) {
            return 'n'; // Se um caractere falhar, não é igual
        }
        ptr1++; // Anda na string1
        ptr2++; // Anda na string2
    }
    return 's'; // Se o while acabou, é porque tudo bateu!
}

// 2. Função principal que "desliza" pela string1
char verificar(char *str1, char *str2) {
    while (*str1 != '\0') {
        // Testa se a partir daqui começa a string2
        if (checaIgualdade(str1, str2) == 's') {
            return 's'; // Achou!
        }
        str1++; // Se não achou aqui, avança um caractere e tenta de novo
    }
    return 'n'; // Percorreu tudo e não achou nada
}

int main() {
    SetConsoleOutputCP(65001);
    char texto[] = "bruno de paula almeida";
    char busca[] = "bruno";

    if (verificar(texto, busca) == 's') 
        printf("Achei a string!\n");
    else 
        printf("Não achei.\n");

    return 0;
}