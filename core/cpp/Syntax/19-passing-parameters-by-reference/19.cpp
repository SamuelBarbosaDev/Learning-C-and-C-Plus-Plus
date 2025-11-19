#include <iostream>
using namespace std;

void number_print(int *);

int main(void)
{
    int number = 69;
    // Mundando o valor de 'number'?
    cout
    << "antes da função: "
    << number
    << endl;
    number_print(&number);
    cout 
    << "depois da função: "
    << number
    << endl;
    return 0;
}

void number_print(int *number)
{
    cout
        <<*number
        << " + 1 = "
        << ++*number
        << endl;
}