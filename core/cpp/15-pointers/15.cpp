#include <iostream>
using namespace std;

int main(void){
    int number = 33;
    int *pointer;

    pointer = &number;
    cout
    << "A posição da variável 'number' é: "
    << &number
    << endl
    << "Endereço do Ponteiro: "
    << pointer
    << endl
    << "Valor do Ponteiro: "
    << *pointer
    << endl;
    return 0;
}
