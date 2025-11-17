#include <iostream>
using namespace std;

int main(void){
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matriz_2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    float array[10] = {1.3, 2.3};
    array[2] = 3.3;

    char mms[2] = "c";

    // 3x3, 3 linhas e 3 colunas.
    cout
    << matriz[2][2]
    << endl;

    // 2x3, 2 linhas e 3 colunas.
    cout
    << matriz_2[1][1]
    << endl;

    // Array:
    cout
    << array[2]
    << " - "
    << sizeof(mms)
    << endl;
    return 0;
}

/*
Claro! Em C/C++, os termos "arrays" e "vetores" são frequentemente usados de forma intercambiável para se referir à mesma estrutura de dados. Um array (ou vetor) é uma coleção ordenada de elementos do mesmo tipo, identificados por um índice. Eles são uma parte fundamental da programação, permitindo que você armazene e manipule conjuntos de dados de maneira eficiente. Vamos explorar como trabalhar com arrays/vetores em C/C++:
Declaração e Inicialização de Arrays/Vetores:

A declaração e inicialização de um array em C/C++ podem ser feitas da seguinte forma:

c

tipo nome_do_array[tamanho];

Por exemplo:

c

int numeros[5]; // Declara um array de inteiros com tamanho 5
double precos[10]; // Declara um array de números de ponto flutuante com tamanho 10

// Inicialização ao declarar
int valores[3] = {10, 20, 30}; // Inicializa um array de inteiros com os valores 10, 20 e 30

Acesso aos Elementos de um Array:

Os elementos de um array são acessados através de um índice, que começa em 0 para o primeiro elemento e vai até o tamanho do array menos um. Por exemplo:

c

int numeros[5] = {1, 2, 3, 4, 5};

int primeiro_elemento = numeros[0]; // Primeiro elemento (índice 0) é 1
int segundo_elemento = numeros[1];  // Segundo elemento (índice 1) é 2

Looping através de um Array:

É comum usar loops para percorrer os elementos de um array. Um loop for ou while pode ser usado para isso:

c

int numeros[5] = {10, 20, 30, 40, 50};

for (int i = 0; i < 5; i++) {
    printf("Elemento %d: %d\n", i, numeros[i]);
}

Arrays Multidimensionais:

Arrays multidimensionais são arrays que têm mais de uma dimensão. Por exemplo, uma matriz 2x3 é um array bidimensional com 2 linhas e 3 colunas.

c

int matriz[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

int elemento = matriz[1][2]; // Acessa o valor 6

Tamanho de Arrays:

O tamanho de um array é fixo após a sua criação. No entanto, você pode usar a função sizeof() para obter o tamanho de um array em bytes:

c

int numeros[5] = {10, 20, 30, 40, 50};
int tamanho = sizeof(numeros) / sizeof(numeros[0]); // Tamanho é 5

Considerações Importantes:

    Índices de arrays devem ser números inteiros não negativos.
    Cuidado para não acessar elementos fora dos limites do array, o que pode levar a resultados imprevisíveis (comportamento indefinido).
    Em C, não há verificação automática de limites de array, então é responsabilidade do programador garantir que os índices sejam válidos.

Arrays são uma ferramenta poderosa para lidar com conjuntos de dados em C/C++. Eles são amplamente usados em algoritmos, estruturas de dados e muitas outras aplicações de programação.
*/