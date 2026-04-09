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
    // *ptrAviao Ponteiro que "aponta" para a ficha do avião original
    // Isso liga a reserva diretamente ao avião cadastrado
    // O seu link: ponteiro que aponta para a ficha de um avião específico
    fichaAviao *ptrAviao; // Guarda o endereço de uma struct fichaAviao //tentei fazer um ponteiro para linkar com o numero la da fichaAviao
    char passageiro[50];//nome do passageiro
} fichaReserva;

// --- FUNÇÕES (O melhor do seu segundo código) ---

// Recebe o vetor de aviões para cadastrar os números
void cadastrarNumeroAviao(fichaAviao aviao[]) 
{
    printf("\n--Cadastro de numero de aviao--\n");
    for (int i = 0; i < 4; i++) {
        printf("Numero do %dº aviao: ", i+1);
        scanf("%d", &aviao[i].num_aviao);
    }
    printf("\nAvioes cadastrados com sucesso!\n");
}

// Recebe o vetor de aviões para cadastrar as vagas
void cadastrarVagas(fichaAviao aviao[]) 
{
    printf("\n--Cadastro de Vagas disponiveis--\n");
    for (int i = 0; i < 4; i++) {
        printf("Vagas para o aviao %d: ", aviao[i].num_aviao);// Usa o número que já foi cadastrado na função anterior
        scanf("%d", &aviao[i].vagas_disponiveis);
    }
    printf("\nVagas cadastradas com sucesso!\n");
}

// Função de Reserva (Onde a mágica acontece)
// Recebe o vetor de aviões (aviao), o de reservas (reserva) e o ENDEREÇO do contador(total_reservas)
void reservarPassagem(fichaAviao aviao[], fichaReserva reserva[], int *total_reservas)
{
    printf("\n--Reserva de Passagem--\n");
    if (*total_reservas >= 10)//usa '*' para ver o VALOR dentro do endereço de total_reservas
    {
        printf("Limite de 10 reservas atingido!\n");
        return;
    }
    int num_digitado;
    printf("Digite o numero do aviao que deseja reservar a passagem: ");
    scanf("%d", &num_digitado);

    for (int i = 0; i < 4; i++)
    {
        if (aviao[i].num_aviao == num_digitado)
        {
            if (aviao[i].vagas_disponiveis > 0)
            {
                // EXPLICAÇÃO DA LINHA ABAIXO:
                // reserva[*total] -> acessa a reserva atual
                // .ptrAviao -> o campo ponteiro dessa reserva
                // = &aviao[i] -> O '&' pega o ENDEREÇO do avião encontrado e guarda no ponteiro.
                // Agora a reserva "sabe" onde o avião 'i' está na memória.
                reserva[*total_reservas].ptrAviao = &aviao[i];
                printf("Digite o nome do passageiro: ");
                scanf(" %[^\n]s", reserva[*total_reservas].passageiro);
                
                // Diminuímos a vaga direto no avião original!
                // Como ptrAviao aponta para aviao[i], mudar aqui muda lá.
                reserva[*total_reservas].ptrAviao->vagas_disponiveis--;

                printf("Reserva confirmada\n");
                printf("Aviao - %d\n", reserva[*total_reservas].ptrAviao->num_aviao);
                printf("Passageiro - %s\n", reserva[*total_reservas].passageiro);
                (*total_reservas)++;// (*total_reservas)++ -> Incrementa o contador que está lá na MAIN.
                return;                
            } else {
                printf("Voo lotado\n");
                return;
            }            
        }
    }
    printf("Aviao %d nao encontrado\n", num_digitado);   
}

int main()
{
    SetConsoleOutputCP(65001);

    fichaAviao aviao[4] = {0};//até 4 frotas de aviao e o "{0}" inicializa com 0
    fichaReserva reserva[10] = {0};//10 reservas por companhia - limite são 10 reservas no programa mesmo
    int opcao, total_reservas = 0;

    //system("cls");//coloquei só pq abrindo no cmd o menu sai sem cor na 1ª exibição
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
        // EXPLICAÇÃO DO IF SCANF:
        // O scanf tenta ler um número. Se você digitar letra, ele retorna 0.
        // Se retornar algo diferente de 1 (!= 1), entra no erro.
        // Se o usuário digitar letra, o scanf retorna 0 e entra aqui
        if (scanf("%d", &opcao) != 1)//evita opcao == letra
        {
            printf ("\nErro: Digite números de 1 a 6!\n\n");
        // EXPLICAÇÃO DO WHILE GETCHAR:
            // "Vassoura" do teclado: pega cada letra do 'abc' que o usuário
            // digitou e joga fora até achar o Enter (\n).
            while (getchar() != '\n');// "Vassoura": limpa o buffer do teclado para não dar loop infinito
            system("pause");
            continue;//pula o switch e volta direto pro início do menu (do-while)
        }

        switch (opcao)
        {
        case 1:
            cadastrarNumeroAviao(aviao); // Chama a função passando o vetor
            system("pause");
            system("cls");           
            break;
        
        case 2:
            cadastrarVagas(aviao); // Chama a função passando o vetor
            system("pause");
            system("cls");            
            break;

        case 3:
            reservarPassagem(aviao, reserva, &total_reservas);//chama a função passando quantas reservas ja foram realizadas
            system("pause");
            system("cls");
            break;

        case 6:
            printf("\nEncerrando programa...\n");
            system("pause");
            break;

        default:
            break;
        }
    }while (opcao != 6);

    return 0;
}