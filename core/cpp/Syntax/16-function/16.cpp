#include <iostream>
#include <string>
using namespace std;

// Prototipos das funções:
int sum(int number_1, int number_2);
void mensage(string name);
void multiplication_table(int number);

int main(void){
    // Variáveis:
    string name;
    int old_year;

    // Qual é o seu nome?
    cout
    << "Digite o seu nome: "
    << endl;

    cin 
    
    >> name;

    mensage(name);

    // Qual é a sua idade?
    cout
    << "Digite a sua idade: "
    << endl;

    cin 
    >> old_year;

    cout
    << endl
    << "Essa é a sua idade daqui a 10 anos é: "
    << sum(old_year, 10)
    << endl;

    // Conhece a tabuada?
    multiplication_table(7);

    return 0;
}

// Implementando aa funções:
int sum(int number_1, int number_2){
    return number_1 + number_2;
}

void mensage(string name) {
    cout 
    << endl
    << "Seu nome é: "
    << name
    << endl;
}

void multiplication_table(int number) {
    for (int i=0; i<=10; i++){
        cout
        << number
        << " x "
        << i
        << " = "
        << number * i
        << endl;
    }
}
