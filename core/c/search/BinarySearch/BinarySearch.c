#include <stdio.h>

int binary_search(int vetor[], int size, int key){
    int left = 0;
    int right = size - 1;

    while (left <= right){
        int through = left + (right - left) / 2;

        if (vetor[through] == key){
            return through;              // Encontrou!
        }
        else if (vetor[through] < key){
            left = through + 1;          // Descarta metade esquerda
        }
        else {
            right = through - 1;         // Descarta metade direita
        }

    }
    return -1; // Não encontrado
}

int main(void){
    int vetor[] = {2, 8, 15, 23, 34, 42, 51, 67, 78, 89, 95};
    int size = 11;
    int wanted = 42;
    
    int pos = binary_search(vetor, size, wanted);

    if (pos != -1)
        printf("Encontrado na posição %d\n", pos);
    else
        printf("Não encontrado\n");
    
    return 0;
}
