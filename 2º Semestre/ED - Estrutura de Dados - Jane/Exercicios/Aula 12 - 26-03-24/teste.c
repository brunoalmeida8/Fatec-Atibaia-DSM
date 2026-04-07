#include<stdio.h>
//#include<windows.h>

typedef struct fichaAviao
{
    int numero;
    int qtd_reserva;
}fichaAviao;

typedef struct fichaReserva {
    fichaAviao *ptrAviao; // Guarda o endereço de uma struct fichaAviao //tentei fazer um ponteiro para linkar com o numero la da fichaAviao
    char passageiro[50];//nome do passageiro
} fichaReserva;


void cadastrarNumeroAviao(fichaAviao aviao[], fichaReserva reserva[10])
{
    for (int i = 0; i < 4; i++)
    {
        printf("Digite o numero do %dº aviao: ", i+1);
        scanf("%d", &aviao[i].numero);
    }
    for(int i = 0; i < 4; i++) printf("%d\n", aviao[i].numero);
}

void cadastrarQtd_reserva(fichaAviao aviao[], fichaReserva reserva[])
{
    for(int i = 0; i < 4; i++){
        printf("Digite a quantidade de vagas do aviao %d: ", aviao[i].numero);
        scanf("%d", &aviao[i].qtd_reserva);
    }
    
    for(int i = 0; i < 4; i++){
        printf("Aviao %d - %d vagas\n", aviao[i].numero, aviao[i].qtd_reserva);
    }
}


int main()
{
    fichaAviao aviao[4];
    fichaReserva reserva[10];
    
    cadastrarNumeroAviao(aviao, reserva);
    cadastrarQtd_reserva(aviao, reserva);
    
    
    
    return 0;
}