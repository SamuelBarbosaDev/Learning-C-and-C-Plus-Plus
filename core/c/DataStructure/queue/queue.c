#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // Para usar bool, true e false


// Estrutura de nó
typedef struct Node {
    int dado;
    struct Node* prox;
} Node;

// Estrutura da fila: mantém ponteiros para frente e trás
typedef struct {
    Node* frente; // Para dequeue e peek
    Node* tras;   // Para enqueue rápido (O(1))
    int tamanho;
} Fila;

// Cria uma fila vazia
Fila* criarFila(){
    Fila* f = (Fila*)malloc(sizeof(Fila));

    if (f != NULL){
        f->frente = f->tras = NULL;
        f->tamanho = 0;
    }

    return f;
}

// Verifica se está vazia
bool estaVazia(Fila* f){
    return f->tamanho == 0;
    // Ou: return f->frente == NULL;
}

// Enqueue: insere no final
void enqueue(Fila* f, int valor){
    Node* novo = (Node*)malloc(sizeof(Node));

    if (novo == NULL){
        printf("ERROR: memória insuficiente!\n");
        return;
    }

    novo->dado = valor;
    novo->prox = NULL;

    if (estaVazia(f)){
        // Fila vazia: frente e trás apontam pro mesmo nó
        f->frente = f->tras = novo;
    } else {
        // Liga o antigo último ao novo
        f->tras->prox = novo;
        f->tras = novo; // Atualiza o trás
    }
    f->tamanho++;
}

// Dequeue: remove e retorna o elemento da frente
int dequeue(Fila* f){
    if (estaVazia(f)){
        printf("ERRO: fila vazia! (underflow)\n");
        exit(1); // Ou retorne um valor sentinela
    }

    Node* temp = f->frente;
    int valor = temp->dado;

    f->frente = f->frente->prox;

    // Se era o último elemento
    if (f->frente == NULL){
        f->tras = NULL;
    }

    free(temp);
    f->tamanho--;
    return valor;
}

// Peek: consulta o elemento da frente sem remover
int frente(Fila* f){
    if (estaVazia(f)){
        printf("ERRO: fila vazia!\n");
        exit(1);
    }
    return f->frente->dado;
}

// Tamanho atual
int tamanho(Fila* f){
    return f->tamanho;
}

// Imprimir a fila
void imprimir(Fila* f){
    printf("Fila (%d elementos): [ ", f->tamanho);
    
    Node* atual = f->frente;
    
    while (atual != NULL){
        printf("%d ", atual->dado);
        atual = atual->prox;
    }
    
    printf("] <- frente\n");
}

// Liberar toda a memória
void destruirFila(Fila* f){
    while (!estaVazia(f)){
        dequeue(f);
    }
    free(f);
}

int main(void){
    Fila* f = criarFila();

    enqueue(f, 10);
    enqueue(f, 20);
    enqueue(f, 30);
    enqueue(f, 40);

    imprimir(f);

    printf("Frente: %d\n", frente(f));
    printf("Removido: %d\n", dequeue(f));
    imprimir(f);

    enqueue(f, 50);
    imprimir(f);

    printf("Removido: %d\n", dequeue(f));
    printf("Removido: %d\n", dequeue(f));
    imprimir(f);

    while (!estaVazia(f)){
        printf("Saindo: %d\n", dequeue(f));
    }

    imprimir(f); // Fila (0 elementos): [ ]

    destruirFila(f);            
    return 0;
}