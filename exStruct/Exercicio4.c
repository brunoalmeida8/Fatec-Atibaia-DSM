#include<stdio.h>
//#include<locale.h>
#include<windows.h>//Biblioteca acentos no Windows
#include<string.h>//biblioteca para usar a função strcmp

typedef struct fichaAviao 
{    
    int num_aviao;
    int vagas_disponiveis;
}fichaAviao;

typedef struct fichaReserva
{
    int num_aviao_reserva;
    char passageiro[50];
}fichaReserva;



int main()
{
    SetConsoleOutputCP(65001);

    fichaAviao aviao[4];//até 4 frotas de aviao
    fichaReserva reserva[10];//10 reservas por companhia - limite são 10 reservas no programa mesmo
    int opcao, total_reservas = 0; reserva[total_reservas].num_aviao_reserva=valor digitado


    do
    {
        printf("\033[1;32m"); // Verde
        printf("\n\n===============================\n");
        printf("--------Menu de opções--------\n");
        printf("===============================\n");
        printf("\033[0m"); // Reset
        printf("===============================\n");
        printf("\n1 - Cadastrar o numero dos avioes");
        printf("\n2 - Cadastrar lugares disponiveis");
        printf("\n3 - Reservar passagem");
        printf("\n4 - Consultar por aviao");
        printf("\n5 - Consultar por passageiro");
        printf("\n6 - Finalizar\n\n");
        printf("===============================\n");
        if (scanf("%d", &opcao) != 1)//evita opcao == letra
        {
            printf ("\nErro: Digite números de 1 a 6!\n\n");
            while (getchar() != '\n'); 
            system("pause");
            continue;
        }

        switch (opcao)
        {
        case 1:
            printf("\n--Cadastro de numero de aviao--\n");
            for (int i = 0; i < 4; i++)
            {
                printf("Numero do %dº aviao: ", i+1);
                scanf("%d", &aviao[i].num_aviao);
            }
            printf("\nAvioes cadastrados com sucesso\n");
            system("pause");
            system("cls");           
            break;
        
        case 2:
            printf("\n--Cadastro de Vagas disponiveis--\n");
            for (int i = 0; i < 4; i++)
            {
                printf("Vagas para o aviao %d", aviao[i].num_aviao);
                scanf("%d", &aviao[i].vagas_disponiveis);
            }
            printf("\nVagas cadastradas com sucesso\n");
            system("pause");
            system("cls");            
            break;
        
        default:
            break;
        }
    }while (opcao != 6);

    return 0;
}