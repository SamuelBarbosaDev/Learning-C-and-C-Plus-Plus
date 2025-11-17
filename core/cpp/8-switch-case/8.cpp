#include <iostream>
using namespace std;

int main(void){
    int number;

    cout
        << "Digiti um número de 1 até 5."
        << endl;
    
    cin >> number;

    switch (number){
        case 1:
            cout 
            << "One"
            << endl;
        break;

        case 2:
            cout 
            << "Two"
            << endl;
        break;

        case 3:
            cout 
            << "Three"
            << endl;
        break;

        case 4:
            cout 
            << "Four"
            << endl;
        break;

        case 5:
            cout 
            << "Five"
            << endl;
        break;

        default:
            cout
            << "I don't know."
            << endl;            
        break;
    }
    return 0;
}