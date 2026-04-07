#include <stdio.h>
#include <string.h>

// 1. Definição das Estruturas com seus nomes
typedef struct {
    int numero;
    int qtd_reserva; // Substituído 'vagas' por 'qtd_reserva'
} fichaAviao;

typedef struct {
    fichaAviao *ptrAviao; // PONTEIRO: guarda o endereço de uma fichaAviao
    char passageiro[50];
} fichaReserva;

// 2. Função de Reserva (Onde a mágica acontece)
// Recebe o vetor de aviões (aviao), o de reservas (reserva) e o ENDEREÇO do contador
void fazerReserva(fichaAviao aviao[], fichaReserva reserva[], int *total) {
    
    if (*total >= 10) { // Usamos '*' para ver o VALOR dentro do endereço de total
        printf("Limite de 10 reservas atingido!\n");
        return;
    }

    int num_digitado;
    printf("\nDigite o numero do aviao para reserva: ");
    scanf("%d", &num_digitado);

    for (int i = 0; i < 4; i++) {
        if (aviao[i].numero == num_digitado) {
            
            if (aviao[i].qtd_reserva > 0) {
                // EXPLICAÇÃO DA LINHA ABAIXO:
                // reserva[*total] -> acessa a reserva atual
                // .ptrAviao -> o campo ponteiro dessa reserva
                // = &aviao[i] -> O '&' pega o ENDEREÇO do avião encontrado e guarda no ponteiro.
                // Agora a reserva "sabe" onde o avião 'i' está na memória.
                reserva[*total].ptrAviao = &aviao[i];

                printf("Nome do passageiro: ");
                scanf(" %[^\n]", reserva[*total].passageiro);

                // Diminuímos a vaga direto no avião original!
                // Como ptrAviao aponta para aviao[i], mudar aqui muda lá.
                reserva[*total].ptrAviao->qtd_reserva--; 

                // (*total)++ -> Incrementa o contador que está lá na MAIN. 
                (*total)++; 
                
                printf("Reserva confirmada!\n");
                return; 
            } else {
                printf("Voo lotado!\n");
                return;
            }
        }
    }
    printf("Aviao %d nao encontrado!\n", num_digitado);
}

int main() {
    // Declarações com seus nomes: aviao[4] e reserva[10]
    fichaAviao aviao[4] = {{101, 2}, {202, 5}, {303, 10}, {404, 0}}; 
    fichaReserva reserva[10];
    int total_realizadas = 0; 

    // Chamada da função com seus nomes de vetores
    fazerReserva(aviao, reserva, &total_realizadas);
    fazerReserva(aviao, reserva, &total_realizadas);

    // Para mostrar que funcionou:
    printf("\n--- Relatorio de Reservas ---\n");
    for(int i = 0; i < total_realizadas; i++) {
        // Usamos '->' porque ptrAviao é um ponteiro!
        printf("Passageiro: %s | Aviao: %d\n", 
                reserva[i].passageiro, 
                reserva[i].ptrAviao->numero); 
    }

    return 0;
}