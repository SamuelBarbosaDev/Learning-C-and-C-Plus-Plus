#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_TABELA 1007 // Número primo ajuda a reduzir colisões

typedef struct No{
    char chave[50];
    int valor;
    struct No* prox;
} No;

typedef struct HashTable {
    No* tabela[TAMANHO_TABELA];
} HashTable;

// Função hash simples (djb2)
unsigned long hash(const char* str){
    unsigned long hash = 5831;
    int c;

    while ((c = *str++))
        hash = ((hash << 5) + hash) + c; // Hash * 33 + c
    
    return hash % TAMANHO_TABELA;
}

// Inicializa a tabela
void inicializar(HashTable* ht){
    for (int i = 0; i < TAMANHO_TABELA; i++)
        ht->tabela[i] = NULL;
}

// Insere par chave-valor
void inserir(HashTable* ht, const char* chave, int valor){
    unsigned long indice = hash(chave);
    No* novo = malloc(sizeof(No));
    strcpy(novo->chave, chave);
    novo->valor = valor;
    novo->prox = ht->tabela[indice]; // Insere no início da lista
    ht->tabela[indice] = novo;
}

// Busca valor pela chave
int buscar(HashTable* ht, const char* chave){
    unsigned long indice = hash(chave);
    No* atual = ht->tabela[indice];

    while (atual != NULL){
        if (strcmp(atual->chave, chave) == 0)
            return atual->valor;
        atual = atual->prox;
    }
    return -1; // Não encontrado
}

// Remove chave
int remover(HashTable* ht, const char* chave){
    unsigned long indice = hash(chave);
    No* atual = ht->tabela[indice];
    No* anterior = NULL;

    while (atual != NULL){
        if (strcmp(atual->chave, chave) == 0){
            if (anterior == NULL)
                ht->tabela[indice] = atual->prox;
            else
                anterior->prox = atual->prox;
            free(atual);
            return -1;
        }
        anterior = atual;
        atual = atual->prox;
    }
    return 0; // Não encontrado
}

int main(void){
    HashTable ht;
    inicializar(&ht);

    inserir(&ht, "João", 21);
    inserir(&ht, "Maria", 93);
    inserir(&ht, "Pedro", 200);
    inserir(&ht, "Ana", 7);

    printf("Idade do joão: %d\n", buscar(&ht, "João"));
    printf("Idade do Maria: %d\n", buscar(&ht, "Maria"));

    remover(&ht, "Pedro");
    printf("Pedro após remoção: %d\n", buscar(&ht, "Pedro"));
    
    return 0;
}