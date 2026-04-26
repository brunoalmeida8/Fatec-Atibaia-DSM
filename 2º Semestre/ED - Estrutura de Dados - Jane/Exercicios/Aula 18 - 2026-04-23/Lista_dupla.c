#include <stdio.h>
#include <stdlib.h>

// Definição da Estrutura do Nó
typedef struct Node {
    int data;           // O dado armazenado no nó
    struct Node* prev;  // Ponteiro para o nó anterior
    struct Node* next;  // Ponteiro para o próximo nó
} Node;

// Ponteiros globais para o início (cabeça) e fim (cauda) da lista
Node* head = NULL;
Node* tail = NULL;


// Cria um novo nó
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Erro: Falha na alocacao de memoria para o novo no.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Verifica se a lista está vazia
int isEmpty() {
    return head == NULL;
}

// Operações da Lista

/**
 * Insere um novo nó no início da lista (HEAD)
 */
void insertAtHead(int data) {
    Node* newNode = createNode(data);
    if (isEmpty()) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    printf("Inserido no inicio: %d\n", data);
}

/**
 * Insere um novo nó no final da lista (TAIL)
 */
void insertAtTail(int data) {
    Node* newNode = createNode(data);
    if (isEmpty()) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    printf("Inserido no final: %d\n", data);
}

/**
 * Remove um nó do início da lista
 */
void deleteFromHead() {
    if (isEmpty()) {
        printf("A lista esta vazia. Nao e possivel remover do inicio.\n");
        return;
    }

    Node* temp = head;
    if (head == tail) { // Se houver apenas um nó
        head = NULL;
        tail = NULL;
    } else {
        head = head->next;
        head->prev = NULL;
    }
    printf("Removido do inicio: %d\n", temp->data);
    free(temp);
}

/**
 * Remove um nó do final da lista
 */
void deleteFromTail() {
    if (isEmpty()) {
        printf("A lista esta vazia. Nao e possivel remover do final.\n");
        return;
    }

    Node* temp = tail;
    if (head == tail) { // Se houver apenas um nó
        head = NULL;
        tail = NULL;
    } else {
        tail = tail->prev;
        tail->next = NULL;
    }
    printf("Removido do final: %d\n", temp->data);
    free(temp);
}

/**
 * Remove o primeiro nó que contém o valor especificado
 */
void deleteNode(int data) {
    if (isEmpty()) {
        printf("A lista esta vazia. Nao e possivel remover %d.\n", data);
        return;
    }

    Node* current = head;
    // Percorre a lista para encontrar o nó
    while (current != NULL && current->data != data) {
        current = current->next;
    }

    // Se o nó não for encontrado
    if (current == NULL) {
        printf("Valor %d nao encontrado na lista para remocao.\n", data);
        return;
    }

    // Se o nó a ser removido for o HEAD
    if (current == head) {
        deleteFromHead();
        return; // deleteFromHead já exibe a mensagem e libera
    }

    // Se o nó a ser removido for o TAIL
    if (current == tail) {
        deleteFromTail();
        return; // deleteFromTail já exibe a mensagem e libera
    }

    // Se for um nó no meio
    current->prev->next = current->next;
    current->next->prev = current->prev;
    printf("Removido no meio: %d\n", current->data);
    free(current);
}

/**
 * Busca um valor na lista e retorna 1 se encontrado, 0 caso contrário
 */
int search(int data) {
    Node* current = head;
    int position = 1;
    while (current != NULL) {
        if (current->data == data) {
            printf("Valor %d encontrado na posicao %d.\n", data, position);
            return 1;
        }
        current = current->next;
        position++;
    }
    printf("Valor %d nao encontrado na lista.\n", data);
    return 0;
}

/**
 * Exibe a lista do início ao fim
 */
void displayForward() {
    if (isEmpty()) {
        printf("Lista vazia.\n");
        return;
    }
    printf("\n--- Lista (Inicio -> Fim) ---\n");
    Node* current = head;
    while (current != NULL) {
        printf("%d <-> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

/**
 * Exibe a lista do fim ao início (vantagem da lista duplamente encadeada)
 */
void displayBackward() {
    if (isEmpty()) {
        printf("Lista vazia.\n");
        return;
    }
    printf("\n--- Lista (Fim -> Inicio) ---\n");
    Node* current = tail;
    while (current != NULL) {
        printf("%d <-> ", current->data);
        current = current->prev;
    }
    printf("NULL\n");
}

/**
 * Libera toda a memória alocada pela lista
 */
void cleanup() {
    Node* current = head;
    Node* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    head = NULL;
    tail = NULL;
    printf("\nMemoria da lista liberada.\n");
}


// Função Principal (Exemplo de Uso)

int main() {
    printf("--- Teste da Lista Duplamente Encadeada ---\n\n");

    // Teste de Inserção
    insertAtHead(10);  // Lista: 10
    insertAtTail(30);  // Lista: 10 <-> 30
    insertAtHead(5);   // Lista: 5 <-> 10 <-> 30
    insertAtTail(40);  // Lista: 5 <-> 10 <-> 30 <-> 40

    displayForward();
    displayBackward();

    // Teste de Busca
    search(10);
    search(99);

    // Teste de Remoção
    printf("\n--- Remocao ---\n");
    deleteFromHead(); // Remove 5
    deleteFromTail(); // Remove 40

    displayForward(); // Lista: 10 <-> 30

    insertAtTail(20); // Lista: 10 <-> 30 <-> 20
    insertAtTail(50); // Lista: 10 <-> 30 <-> 20 <-> 50
    displayForward();

    deleteNode(30);   // Remove nó do meio
    displayForward(); // Lista: 10 <-> 20 <-> 50
/*
    deleteNode(10);   // Remove 10 (agora é o HEAD)
    displayForward(); // Lista: 20 <-> 50

    deleteNode(50);   // Remove 50 (agora é o TAIL)
    displayForward(); // Lista: 20

    deleteNode(20);   // Remove o último nó
    displayForward(); // Lista vazia

    // Teste de remoção em lista vazia
    deleteFromHead();

    // Teste de Inserção após lista vazia
    insertAtHead(100);
    displayForward();*/

    // Libera a memória antes de sair
    cleanup();

    return 0;
}
