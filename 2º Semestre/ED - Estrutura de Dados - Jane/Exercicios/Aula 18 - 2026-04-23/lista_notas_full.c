#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// definição de tipo
typedef struct sNotas {
    float nota_aluno;
    struct sNotas *prox_no;
} NOTAS;

typedef NOTAS *lista_notas;

// Inserir no final
void inserir_no_final(lista_notas *No_notas, float notaAluno) {
    if (*No_notas == NULL) {
        *No_notas = (lista_notas) malloc(sizeof(NOTAS));
        if (*No_notas == NULL) return;
        (*No_notas)->nota_aluno = notaAluno;
        (*No_notas)->prox_no = NULL;
    } else {
        inserir_no_final(&(*No_notas)->prox_no, notaAluno);
    }
}

// Inserir no início
void inserir_no_inicio(lista_notas *No_notas, float notaAluno)
{
    lista_notas novo = (lista_notas) malloc(sizeof(NOTAS));
    if (novo == NULL) return;
    novo->nota_aluno = notaAluno;
    novo->prox_no = *No_notas;
    *No_notas = novo;
}

// Inserir no meio
void inserir_no_meio(lista_notas *No_notas, float notaAluno, int posicao) {
    lista_notas novo = (lista_notas) malloc(sizeof(NOTAS));
    if (novo == NULL) return;
    novo->nota_aluno = notaAluno;

    lista_notas atual = *No_notas;
    int i = 0;

    while (atual != NULL && i < posicao - 1) {
        atual = atual->prox_no;
        i++;
    }

    if (atual == NULL) {
        free(novo);
        printf("Posição inválida.\n");
        return;
    }

    novo->prox_no = atual->prox_no;
    atual->prox_no = novo;
}

// Pesquisar uma nota
lista_notas pesquisar_nota(lista_notas No_notas, float notaAluno) {
    while (No_notas != NULL) {
        if (No_notas->nota_aluno == notaAluno)
            return No_notas;
        No_notas = No_notas->prox_no;
    }
    return NULL;
}

// Excluir uma nota
void excluir_nota(lista_notas *No_notas, float notaAluno) {
    lista_notas atual = *No_notas;
    lista_notas anterior = NULL;

    while (atual != NULL && atual->nota_aluno != notaAluno) {
        anterior = atual;
        atual = atual->prox_no;
    }

    if (atual == NULL) {
        printf("Nota %.2f não encontrada.\n", notaAluno);
        return;
    }

    if (anterior == NULL) {
        *No_notas = atual->prox_no;
    } else {
        anterior->prox_no = atual->prox_no;
    }

    free(atual);
    printf("\nNota %.2f excluída com sucesso.\n", notaAluno);
}

// Imprimir lista
void imprimir_(lista_notas No_lista) {
    if (No_lista == NULL) return;
    printf("Nota aluno = %.2f \n", No_lista->nota_aluno);
    imprimir_(No_lista->prox_no);
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    lista_notas No_notas = NULL;

    inserir_no_final(&No_notas, 4.5);
    inserir_no_final(&No_notas, 2.5);
    inserir_no_inicio(&No_notas, 7.0);
    inserir_no_meio(&No_notas, 6.0, 1); // insere após a posição 1
    printf("Lista de notas:\n");
    imprimir_(No_notas);

    float nota_busca = 2.5;
    lista_notas resultado = pesquisar_nota(No_notas, nota_busca);
    if (resultado != NULL)
        printf("\nNota %.2f encontrada.\n", resultado->nota_aluno);
    else
        printf("\nNota %.2f não encontrada.\n", nota_busca);

    excluir_nota(&No_notas, 4.0);

    printf("\nLista após exclusão:\n");
    imprimir_(No_notas);

    return 0;
}
