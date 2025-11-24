#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int sequential_search(int vetor[], int size, int key){
    for (int i = 0; i < size; i++){
        if (vetor[i] == key){
            return i; // Retorna o índice
        }
    }
    return -1; // Não encontrou o valor
}


int main(void){
    int vetor[] = {10, 25, 3, 87, 42, 19, 56};
    int size = 7;
    int wanted = 19;
    int result = sequential_search(vetor, size, wanted);

    if (result != -1){
        printf("Encontrado na posição: %d\n", result);
    } else {
        printf("Não encontrado!\n");
    }

    return 0;
}