#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    // Variable definition:
    int verification = 1;
    string name = "-- Samuel --";
    

    // Validation:
    if (
        (
            (verification != 0) && 
            (verification == 1)
        ) ||
        (name == "-- Samuel --")
    ) {
        cout
            << "Verdadeiro"
            << endl;
    }

    else if (name == "Samuel"){
        cout
            << "Nome igual a Samuel"
            << endl;
    }

    else {
        cout
            << "Falso"
            << endl;
    }
    return 0;
}

/*
No C++, você pode usar várias formas de verificar condições no if e else, incluindo operadores lógicos, comparações e outros. Aqui estão algumas das principais formas de verificar condições:

-----------------------------
Operadores de Comparação:

    Igual (==): Verifica se dois valores são iguais.
    Diferente (!=): Verifica se dois valores são diferentes.
    Maior que (>): Verifica se o valor da esquerda é maior do que o da direita.
    Maior ou igual (>=): Verifica se o valor da esquerda é maior ou igual ao da direita.
    Menor que (<): Verifica se o valor da esquerda é menor do que o da direita.
    Menor ou igual (<=): Verifica se o valor da esquerda é menor ou igual ao da direita.

Exemplo:
int x = 5;
if (x == 5) {
    // Condição verdadeira
}

if (x > 10) {
    // Condição falsa
}

-----------------------------
Operadores Lógicos:

    E lógico (&&): Verifica se ambas as condições são verdadeiras.
    Ou lógico (||): Verifica se pelo menos uma das condições é verdadeira.
    Negação (!): Inverte o valor de uma condição.

Exemplo:
int idade = 25;
bool temCarteira = true;

if (idade >= 18 && temCarteira) {
    // Pode dirigir
}

if (idade < 18 || !temCarteira) {
    // Não pode dirigir
}

-----------------------------
Expressões Complexas:

Você pode combinar operadores de comparação e lógicos para criar expressões mais complexas:
int a = 10, b = 5, c = 7;

if ((a > b) && (b < c)) {
    // Condição verdadeira
}

-----------------------------
Operador Ternário:

Você pode usar o operador ternário para fazer uma verificação rápida e atribuir um valor com base em uma condição:
int x = 7;
int y = (x > 5) ? 10 : 20; // y será 10 se x for maior que 5, caso contrário, será 20

-----------------------------
Funções e Chamadas de Funções:

Você também pode usar funções que retornam valores booleanos em suas condições:
bool verificaCondicao() {
    // Alguma lógica para verificar a condição
    return true;
}

if (verificaCondicao()) {
    // Condição verdadeira
}

-----------------------------
Essas são algumas das principais formas de verificar condições no C++. Você pode combiná-las e usá-las de várias maneiras para criar estruturas condicionais complexas em seus programas.

*/