#include<stdio.h>

// A função recebe um ponteiro. Como este parâmetro é uma variável ponteiro local,
// podemos movê-lo (fazer 'vetor++') sem problemas, pois é apenas uma cópia do endereço.
void preencher(int *vetor, int valor)
{
    for (int i = 0; i < 5; i++)
    {
        *vetor = valor;
        vetor++; // Modifica a cópia do ponteiro, permitindo navegar pelo array.
    }
    
    return;
}

int main()
{
    // 'vetor' aqui é o nome do array. Em C, isso é uma constante de endereço, 
    // ou seja, um endereço fixo na memória que não pode ser alterado.
    int vetor[5], valor = 2;

    preencher(vetor, valor);

    // ERRO COMUM: Se tentássemos fazer 'vetor++' aqui, o compilador daria erro de
    // "modifiable lvalue", pois não podemos mudar o endereço inicial do array.
    // SOLUÇÃO: Criamos um ponteiro auxiliar ('ptrDeslizador') que é uma variável 
    // comum e, por isso, pode ser incrementada à vontade.
    int *ptrDeslizador = vetor;

    for (int i = 0; i < 5; i++)
    {
        printf("Valor do vetor[%d]: %d\n", i, *ptrDeslizador);
        ptrDeslizador++; // Usamos o auxiliar para navegar, mantendo o 'vetor' original intacto.
    }
    
    return 0;
}
/*
só uma obs:
    int vetor[] = {10, 20, 30};
    int *ptr = vetor; // Aponta para 10

    printf("%d\n", *ptr++); // Imprime 10. O ptr agora aponta para 20!
    printf("%d\n", *ptr);   // Imprime 20. O ptr continua no 20.



Se você fizesse *(ptr + 1) no lugar do primeiro printf, ele imprimiria 20, mas o ptr continuaria apontando para o 10.    

*ptr++ = 20	 iria fazer isso - 1. Pega o endereço atual. 2. Coloca 20 lá. 3. Incrementa ptr(passa para proxima casa).	SIM, o ponteiro se move.

*/