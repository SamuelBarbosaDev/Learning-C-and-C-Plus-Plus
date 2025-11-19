#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string string_name;
    cout
        << "Qual é o seu nome?"
        << endl;
    cin 
        >> string_name;
    cout
        << "Seu nome é: "
        << string_name
        << endl;

    return 0;
}