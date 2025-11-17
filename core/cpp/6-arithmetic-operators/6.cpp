#include <iostream>
using namespace std;

int main(void) {
    int a, b;
    int addition, subtraction, remainder_of_division;
    float multiplication, division, exponentiation, root;
    a = 10;
    b = 2;

    // Soma:
    addition = a + b;

    // Subtração:
    subtraction = a - b;

    // Multiplicação:
    multiplication = a * b;

    // Divisão:
    division = a / b;

    // Resto Da Divisão:
    remainder_of_division = a % b;

    cout
        << "a = 10 | b = 2"
        << endl
        << "Soma a + b = "
        << addition
        << endl
        << "Subtração a - b = "
        << subtraction
        << endl
        << "Multiplicação a * b = "
        << multiplication
        << endl
        << "Divisão a / b = "
        << division
        << endl
        << "Resto Da Divisão a % b = "
        << remainder_of_division
        << endl;

    return 0;
} // namespace std;

/*
O C e o C++ oferecem uma variedade de operadores aritméticos que permitem realizar operações matemáticas em variáveis e constantes. Aqui estão os operadores aritméticos comuns em C/C++:

    Adição (+): Realiza a adição de dois operandos.

    Subtração (-): Realiza a subtração entre dois operandos.

    Multiplicação (*): Realiza a multiplicação entre dois operandos.

    Divisão (/): Realiza a divisão do primeiro operando pelo segundo.

    Módulo (%): Retorna o resto da divisão do primeiro operando pelo segundo.

Além desses operadores básicos, também existem operadores de incremento e decremento:

    Incremento (++): Incrementa o valor de uma variável por 1.

    Decremento (--): Decrementa o valor de uma variável por 1.
*/