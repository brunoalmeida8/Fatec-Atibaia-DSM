#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float *ptr = array; // aqui só array ja resolve pois é vetor entao nao precisa de &array nem &array[]

    for (int i = 0; i < 10; i++)
    {
        //como é vetor para ter o endereço precisa fazer &ptr[i]
        //se nao fosse vetor ia ser só ptr; sem o &...
        //printf("%p\n", &ptr[i]);
        
        //se quisesse conteudo - ptr[i] ou *(ptr + i) pq o compilador converte ptr[i] para *(ptr + i) mesmo kkk, entao:
        printf("Posicao %d\tEndereco %p\tValor: %f\n", i, &ptr[i], ptr[i]);
        //ou
        //printf("Posicao %d\tEndereco %p\tValor: %f\n", i, &ptr[i], *(ptr + i));
    }
    

    return 0;
}