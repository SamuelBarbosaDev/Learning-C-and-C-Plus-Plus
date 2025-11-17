#include <iostream>
using namespace std;

int main(void) {
    int a, b, c;

    cout 
        << "Entre com o valor de A:"
        << endl;

    cin 
        >> a;

    cout
        << "Entre com o valor de B:"
        << endl;

    cin
        >> b;
    
    c = a;
    a = b;
    b = c;

    cout
        << "O valor de A é: "
        << a
        << endl
        << "O valor de B é: "
        << b
        << endl;

    return 0;
}