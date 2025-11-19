#include <stdio.h>   // Para usar printf
#include <stdlib.h>  // Para usar malloc() e free()

// Definição de uma struct que representa um vetor 2D ou ponto no plano
struct vectorStruct {
    float x;   // coordenada x
    float y;   // coordenada y
};

// Aqui criamos um "apelido" (alias) chamado "point" para a struct acima
// Depois dessa linha, podemos usar "point" no lugar de "struct vectorStruct"
typedef struct vectorStruct point;

int main(void) {
    // 1. Criamos um PONTEIRO do tipo "point"
    //    Ainda não temos memória alocada, só um ponteiro vazio
    point *vector;

    // 2. Alocamos dinamicamente (no heap) espaço para UM ponto
    //    malloc retorna um ponteiro void*, por isso fazemos o cast para (point*)
    //    sizeof(point) retorna o tamanho em bytes da struct (8 bytes: 4 do float x + 4 do float y)
    vector = (point*) malloc(sizeof(point));

    // 3. Verificando se malloc conseguiu alocar!
    if (vector == NULL) {
        printf("Erro: não conseguiu alocar memória!\n");
        return 1;  // sai do programa com erro
    }

    // 4. Agora podemos acessar os campos usando a seta ->
    //    vector->x é o mesmo que (*vector).x
    vector->x = 1.1;
    vector->y = 1.2;

    // 5. Imprimimos o ponto no formato (x,y)
    printf("P = (%.1f, %.1f)\n", vector->x, vector->y);

    // 6. IMPORTANTE: liberar a memória alocada com malloc!
    //    Senão dá memory leak (vazamento de memória)
    free(vector);

    // 7. Boa prática: após free, colocar o ponteiro como NULL
    vector = NULL;

    return 0;  // tudo certo!
}