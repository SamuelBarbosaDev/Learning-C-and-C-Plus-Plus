#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string response;
    bool condition = true;

    while (condition){

        cout
        << "Gostaria de continuar? Digite 'S' para sim, e 'N' para não."
        << endl;

        cin >> response;

        if (response == "N"){
            condition = false;
            // break;
        }

        else if (response == "S"){
            continue;
        }

        else {
            cout
            << "Não Entendi."
            << endl;
        }
    };
    return 0;
}

/*
O loop while é uma estrutura de controle em C e C++ que permite repetir um bloco de código enquanto uma condição especificada for verdadeira. É uma das estruturas de repetição mais básicas e úteis para executar tarefas repetitivas com base em uma condição. Aqui está uma explicação completa sobre como usar o loop while em C e C++:
Sintaxe do Loop while:

A sintaxe básica do loop while é a seguinte:

cpp

while (condição) {
    // Bloco de código a ser repetido
}

    Condição: Uma expressão booleana que verifica se o loop deve continuar ou não.

O bloco de código dentro do while será repetido enquanto a condição especificada for avaliada como verdadeira.
Exemplos de Uso:

    Contagem de 1 a 5:

cpp

int i = 1;
while (i <= 5) {
    cout << i << " ";
    i++;
}
// Saída: 1 2 3 4 5

    Leitura de Entradas até um Valor Específico:

cpp

int numero;
cout << "Digite um número (digite 0 para sair): ";
cin >> numero;

while (numero != 0) {
    cout << "Número digitado: " << numero << endl;
    cout << "Digite um número (digite 0 para sair): ";
    cin >> numero;
}

    Iteração sobre um Array:

cpp

int numeros[] = {2, 4, 6, 8, 10};
int i = 0;

while (i < 5) {
    cout << numeros[i] << " ";
    i++;
}
// Saída: 2 4 6 8 10

Comandos Break e Continue:

    Break: É usado para sair imediatamente de um loop while, interrompendo a repetição.

cpp

int i = 1;
while (i <= 10) {
    if (i == 5) {
        break; // Sai do loop quando i == 5
    }
    cout << i << " ";
    i++;
}
// Saída: 1 2 3 4

    Continue: É usado para interromper a iteração atual e passar para a próxima iteração.

cpp

int i = 1;
while (i <= 10) {
    if (i == 5) {
        i++; // Incrementa 'i' para evitar loop infinito
        continue; // Pula para a próxima iteração quando i == 5
    }
    cout << i << " ";
    i++;
}
// Saída: 1 2 3 4 6 7 8 9 10

Uso em Cenários Específicos:

O loop while é útil quando você deseja repetir um bloco de código com base em uma condição, mas não necessariamente um número fixo de vezes. Pode ser usado quando a quantidade de repetições não é conhecida antecipadamente ou quando você está lendo entradas do usuário ou de um arquivo.

cpp

char resposta;
while (true) {
    cout << "Você deseja continuar? (S/N): ";
    cin >> resposta;
    if (resposta == 'N' || resposta == 'n') {
        break; // Sai do loop quando a resposta for 'N' ou 'n'
    }
}

O loop while é uma estrutura poderosa para controlar repetições em C e C++. Certifique-se de que a condição do loop seja alterada para que ele eventualmente termine, evitando loops infinitos acidentais.
*/