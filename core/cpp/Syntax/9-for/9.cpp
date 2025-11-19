#include <iostream>
using namespace std;

int main(void){
    // Variable difinition:
    int number;

    // Criando uma matriz 10 por 10:
    for (number=0; number<10; number++){
        cout
        << number
        << " "
        << "-";

        for (int number2=0; number2<10; number2++){
            cout
            << " "
            << number2;
        }

        cout << endl;
    }
    return 0;
}

/*
O loop for é uma estrutura de controle em C e C++ usada para repetir um bloco de código um número específico de vezes. É uma das estruturas de repetição mais comuns e é muito útil para iterar sobre sequências de valores ou realizar uma tarefa repetitiva. Aqui está uma explicação completa sobre como usar o loop for em C e C++:
Sintaxe do Loop for:

A sintaxe básica do loop for é a seguinte:

cpp

for (inicialização; condição; atualização) {
    // Bloco de código a ser repetido
}

    Inicialização: Geralmente é usado para inicializar uma variável de controle do loop.
    Condição: Uma expressão booleana que verifica se o loop deve continuar ou não.
    Atualização: Geralmente usado para atualizar a variável de controle do loop.

Exemplos de Uso:

    Contagem de 1 a 10:

cpp

for (int i = 1; i <= 10; i++) {
    cout << i << " ";
}
// Saída: 1 2 3 4 5 6 7 8 9 10

    Iteração em um Array:

cpp

int numeros[] = {2, 4, 6, 8, 10};
for (int i = 0; i < 5; i++) {
    cout << numeros[i] << " ";
}
// Saída: 2 4 6 8 10

    Contagem Decrescente:

cpp

for (int i = 10; i >= 1; i--) {
    cout << i << " ";
}
// Saída: 10 9 8 7 6 5 4 3 2 1

Comandos Break e Continue:

    Break: É usado para sair imediatamente de um loop, interrompendo a repetição.

cpp

for (int i = 1; i <= 10; i++) {
    if (i == 5) {
        break; // Sai do loop quando i == 5
    }
    cout << i << " ";
}
// Saída: 1 2 3 4

    Continue: É usado para interromper a iteração atual e passar para a próxima iteração.

cpp

for (int i = 1; i <= 10; i++) {
    if (i == 5) {
        continue; // Pula para a próxima iteração quando i == 5
    }
    cout << i << " ";
}
// Saída: 1 2 3 4 6 7 8 9 10

Uso com Iteradores (C++ STL):

O loop for é frequentemente usado com iteradores para percorrer coleções, como vetores, listas, mapas, etc., da biblioteca padrão C++ (STL).

cpp

#include <vector>

vector<int> numeros = {1, 2, 3, 4, 5};
for (auto it = numeros.begin(); it != numeros.end(); ++it) {
    cout << *it << " ";
}
// Saída: 1 2 3 4 5

O for é uma ferramenta poderosa para controlar repetições em C e C++. Pode ser usado em uma variedade de cenários, desde contagens simples até iterações complexas através de coleções de dados. Lembre-se de ajustar a inicialização, condição e atualização de acordo com os requisitos do seu programa.
*/