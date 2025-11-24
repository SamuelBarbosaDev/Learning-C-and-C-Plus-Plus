#include <stdio.h>
#include <string.h>
#define TAMANHO 1009
#define VAZIO "___VAZIO___"
#define REMOVIDO "___REMOVIDO___"


typedef struct {
    char chave[50];
    int valor;
} Entrada;

Entrada tabela[TAMANHO];

void inicializar() {
    for (int i = 0; i < TAMANHO; i++) {
        strcpy(tabela[i].chave, VAZIO);
    }
}

unsigned long hash(const char* str) {
    unsigned long h = 5381;
    int c;
    while ((c = *str++)) h = ((h << 5) + h) + c;
    return h % TAMANHO;
}

void inserir(const char* chave, int valor) {
    unsigned long i = hash(chave);
    int tentativas = 0;

    while (strcmp(tabela[i].chave, VAZIO) != 0 &&
           strcmp(tabela[i].chave, REMOVIDO) != 0 &&
           tentativas < TAMANHO) {
        if (strcmp(tabela[i].chave, chave) == 0) {
            tabela[i].valor = valor;
            return;
        }
        i = (i + 1) % TAMANHO;
        tentativas++;
    }

    if (tentativas < TAMANHO) {
        strcpy(tabela[i].chave, chave);
        tabela[i].valor = valor;
    }
}

int buscar(const char* chave) {
    unsigned long i = hash(chave);
    int tentativas = 0;

    while (strcmp(tabela[i].chave, VAZIO) != 0 && tentativas < TAMANHO) {
        if (strcmp(tabela[i].chave, chave) == 0)
            return tabela[i].valor;
        i = (i + 1) % TAMANHO;
        tentativas++;
    }
    return -1;
}



int main(void){
    return 0;
}