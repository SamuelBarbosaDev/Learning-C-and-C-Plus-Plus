#include <iostream>
using namespace std;

int factorial(int number);

int main(void)
{
    for (int i = 1; i <= 10; i++)
    {
        cout
            << "Factorial de "
            << i
            << "! = "
            << factorial(i)
            << endl;
    }
    return 0;
}

int factorial(int number)
{
    cout << number << "*";
    // O que está acontecendo aqui?
    if (number < 2){
        cout << " = ";
        return 1;
    }

    return factorial(number - 1) * number;
}

/*
A recursividade em programação é um conceito em que uma função é definida em termos de si mesma, ou seja, uma função chama a si mesma para resolver um problema. Isso pode ser uma abordagem poderosa para resolver problemas que podem ser divididos em problemas menores e semelhantes. A recursividade é amplamente usada em linguagens de programação como C e C++, e é especialmente útil para resolver problemas matemáticos e estruturas de dados complexas.

Vamos explorar a recursividade em funções usando um exemplo simples de cálculo do fatorial de um número.
Exemplo de Recursividade: Cálculo do Fatorial

O fatorial de um número inteiro positivo n é o produto de todos os inteiros positivos menores ou iguais a n. Matematicamente, é representado como n! e definido da seguinte forma:

    n! = n * (n-1) * (n-2) * ... * 2 * 1
    Por convenção, 0! é definido como 1.

Vamos implementar uma função recursiva para calcular o fatorial de um número em C++:

cpp

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1; // Caso base: 0! = 1
    } else {
        return n * factorial(n - 1); // Chamada recursiva
    }
}

int main() {
    int num = 5;
    cout << "Fatorial de " << num << " é " << factorial(num) << endl;
    return 0;
}

Neste exemplo, a função factorial é definida de forma recursiva:

    Caso Base: Se n for igual a 0, retornamos 1 como resultado do fatorial. Isso é importante para evitar a recursão infinita.

    Chamada Recursiva: Caso contrário, multiplicamos n pelo resultado da função factorial(n - 1). Isso quebra o problema em subproblemas menores até que alcancemos o caso base.

Aqui está como a recursão ocorre para n = 5:

scss

factorial(5) = 5 * factorial(4)
             = 5 * (4 * factorial(3))
             = 5 * (4 * (3 * factorial(2)))
             = 5 * (4 * (3 * (2 * factorial(1))))
             = 5 * (4 * (3 * (2 * 1)))
             = 5 * 24
             = 120

A recursão permite resolver um problema complexo dividindo-o em problemas menores e mais simples. No entanto, é importante ter um caso base para garantir que a recursão eventualmente termine. Caso contrário, você terá um loop infinito.
*/