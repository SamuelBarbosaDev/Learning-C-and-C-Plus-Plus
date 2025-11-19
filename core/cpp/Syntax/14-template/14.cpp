#include <iostream>
using namespace std;

template <class datatype>
int function(datatype a);

int main(void)
{
    cout << function(10) << endl;
    cout << function(13.1) << endl;

    return 0;
}

template <class datatype>
int function(datatype a)
{
    cout << "Type: " << typeid(a).name() << endl;
    return ++a;
}

/*
Os templates são uma característica poderosa do C++ que permitem escrever código genérico, ou seja, código que pode funcionar com diferentes tipos de dados sem a necessidade de reescrever o mesmo código para cada tipo. Isso proporciona flexibilidade e reutilização de código, tornando o C++ uma linguagem altamente versátil. Aqui está uma explicação detalhada sobre como usar templates em C++:
Templates de Função:

Os templates de função permitem criar funções genéricas que podem trabalhar com diferentes tipos de dados. Aqui está a sintaxe básica de um template de função:

cpp

template <typename Tipo>
Tipo nomeDaFuncao(Tipo parametro) {
    // Corpo da função
}

Exemplo de uso de um template de função:

cpp

#include <iostream>
using namespace std;

template <typename T>
T maior(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int int1 = 5, int2 = 10;
    cout << "Maior valor: " << maior(int1, int2) << endl;

    double double1 = 3.14, double2 = 2.71;
    cout << "Maior valor: " << maior(double1, double2) << endl;

    return 0;
}

Templates de Classe:

Os templates de classe permitem criar classes genéricas que podem funcionar com diferentes tipos de dados. Aqui está a sintaxe básica de um template de classe:

cpp

template <typename Tipo>
class NomeDaClasse {
public:
    // Membros da classe
};

Exemplo de uso de um template de classe:

cpp

#include <iostream>
using namespace std;

template <typename T>
class Pilha {
private:
    T elementos[100];
    int topo;

public:
    Pilha() : topo(-1) {}

    void empilhar(T elemento) {
        elementos[++topo] = elemento;
    }

    T desempilhar() {
        return elementos[topo--];
    }
};

int main() {
    Pilha<int> pilhaInt;
    pilhaInt.empilhar(5);
    pilhaInt.empilhar(10);
    cout << "Desempilhado: " << pilhaInt.desempilhar() << endl;

    Pilha<double> pilhaDouble;
    pilhaDouble.empilhar(3.14);
    pilhaDouble.empilhar(2.71);
    cout << "Desempilhado: " << pilhaDouble.desempilhar() << endl;

    return 0;
}

Template de Tipo Não Nomeado (C++11):

A partir do C++11, você também pode usar um template de tipo não nomeado, conhecido como auto, para inferir o tipo de dados automaticamente com base nos valores passados.

Exemplo:

cpp

#include <iostream>
using namespace std;

template <typename T, typename U>
auto soma(T a, U b) -> decltype(a + b) {
    return a + b;
}

int main() {
    int inteiro = 5;
    double flutuante = 3.14;
    cout << "Soma: " << soma(inteiro, flutuante) << endl;

    return 0;
}

Os templates são uma ferramenta poderosa que permite escrever código genérico e reutilizável em C++. Eles são amplamente utilizados para criar bibliotecas, contêineres, algoritmos e estruturas de dados que funcionam com diversos tipos de dados.
*/