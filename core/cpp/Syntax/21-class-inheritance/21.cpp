#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    string nome;
    void comer() {
        cout << nome << " está comendo." << endl;
    }
};

class Cachorro : public Animal {
public:
    void latir() {
        cout << nome << " está latindo." << endl;
    }
};

int main() {
    Cachorro rex;
    rex.nome = "Rex";
    rex.comer();
    rex.latir();

    return 0;
}
