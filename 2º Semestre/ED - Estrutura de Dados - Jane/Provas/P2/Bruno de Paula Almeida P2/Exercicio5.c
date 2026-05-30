#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cadDisciplinas {
    int codigo;
    char disciplina[30];
    char prof[30];
    struct cadDisciplinas *proxNo;
} cadDisciplinas;

void inserirFim(cadDisciplinas **lista, int cod, char *nomeDisc, char *nomeProf) {
    cadDisciplinas *novoNo = (cadDisciplinas*) malloc(sizeof(cadDisciplinas));
    if (novoNo == NULL) {
        printf("Erro de alocacao de memoria!\n");
        return;
    }
    
    novoNo->codigo = cod;
    strcpy(novoNo->disciplina, nomeDisc);
    strcpy(novoNo->prof, nomeProf);
    novoNo->proxNo = NULL;

    if (*lista == NULL) {
        *lista = novoNo;
    } else {
        cadDisciplinas *atual = *lista;
        while (atual->proxNo != NULL) {
            atual = atual->proxNo;
        }
        atual->proxNo = novoNo;
    }
}

void solicitarCadastro(cadDisciplinas **lista) {
    int cod;
    char nomeDisc[30], nomeProf[30];

    for (int i = 0; i < 3; i++) {
        printf("\n===== Disciplina %d =====\n", i + 1);
        
        printf("Digite o codigo: ");
        scanf("%d%*c", &cod);
             
        printf("Digite a disciplina: ");
        scanf("%s", nomeDisc);
        
        printf("Digite o prof: ");
        scanf("%s", nomeProf);

        inserirFim(lista, cod, nomeDisc, nomeProf);
    }
}

int main() {
    cadDisciplinas *listaDisciplinas = NULL;
    
    solicitarCadastro(&listaDisciplinas);
    
    return 0;
}
