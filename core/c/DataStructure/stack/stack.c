#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Estrutura do nó da pilha
typedef struct Node{
    int data;           // Pode mudar para qualquer tipo (void* para genérica)
    struct Node* next;
} Node;

// Estrutura da pilha
typedef struct Stack{
    Node* top; // Aponta sempre para o topo
    int size;  // Quantidade de elementos (opcional, mas muito útil)
} Stack;

// Cria uma pilha vazia
Stack* create_stack(){
    Stack* s = (Stack*)malloc(sizeof(Stack));

    if (s == NULL){
        printf("Erro ao alocar memória para a pilha!\n");
        exit(1);
    }

    s->top = NULL;
    s->size = 0;
    return s;
}

// Verifica se a pilha está vazia
bool is_empty(Stack* s){
    return s->top == NULL; // Ou return s->size == 0;
}

// Retorna o tamanho da pilha
int size(Stack* s){
    return s->size;
}

// Retorna o elemento do topo sem remover (peek)
int peek(Stack* s){
    if (is_empty(s)){
        printf("Erro: pilha vazia! Não há topo.\n");
        exit(1);
    }

    return s->top->data;
}

// Insere um elemento no topo (push)
void push(Stack* s, int value){
    Node* new_node = (Node*)malloc(sizeof(Node));

    if (new_node == NULL){
        printf("Erro ao alocar memória para a pilha!\n");
        exit(1);
    }

    new_node->data = value;
    new_node->next = s->top;
    s->top = new_node;
    s->size++;

    printf("%d empilhado.\n", value);
}

// Remove e retorna o elemento do topo (pop)
int pop(Stack* s){
    if (is_empty(s)){
        printf("Erro: pilha vazia! Não é possível desempilhar.\n");
    }

    Node* temp = s->top;
    int value = temp->data;

    s->top = s->top->next;   // Topo passa a ser o próximo
    free(temp);              // libera memória do nó removido
    s->size--;

    return value;
}

// Exibe todos os elementos da pilha (do topo para a base)
void print_stack(Stack* s){
    if (is_empty(s)){
        printf("Pilha vazia!\n");
        return;
    }

    printf("Pilha (topo -> base): ");
    
    Node* current = s->top;
    while (current != NULL){
        printf("%d ", current->data);
        current = current->next;
    }

    printf("\n");
}

// Libera toda a memória da pilha
void free_stack(Stack* s){
    while (!is_empty(s)){
        pop(s); // Reutiliza a função pop que já libera
    }
    
    free(s);
    printf("Pilha liberada da memória.\n");
}

int main(void){
    Stack* pilha = create_stack();

    printf("Pilha vazia? %s\n", is_empty(pilha) ? "Sim" : "Não");

    push(pilha, 10);
    push(pilha, 20);
    push(pilha, 30);
    push(pilha, 40);

    print_stack(pilha); // 40, 30, 20, 10

    printf("Topo da pilha: %d\n", peek(pilha));
    printf("Tamanho: %d\n", size(pilha));

    printf("Desempilhado: %d\n", pop(pilha));
    printf("Desempilhado: %d\n", pop(pilha));

    print_stack(pilha);

    printf("Novo topo: %d\n", peek(pilha));

    free_stack(pilha);

    return 0;
}