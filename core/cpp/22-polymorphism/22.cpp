#include <iostream>
using namespace std;

class Animal {
public:
    virtual void fazerSom() {
        cout << "Um animal faz um som." << endl;
    }
};

class Cachorro : public Animal {
public:
    void fazerSom() override {
        cout << "O cachorro late." << endl;
    }
};

class Gato : public Animal {
public:
    void fazerSom() override {
        cout << "O gato mia." << endl;
    }
};

int main() {
    Animal* animais[2];
    animais[0] = new Cachorro();
    animais[1] = new Gato();

    for (int i = 0; i < 2; i++) {
        animais[i]->fazerSom();
    }

    delete animais[0];
    delete animais[1];

    return 0;
}

/*
O polimorfismo é um dos conceitos fundamentais da programação orientada a objetos (POO) que permite que diferentes classes sejam tratadas de maneira uniforme através de uma interface comum. Isso permite escrever código mais genérico e flexível, tornando mais fácil estender e manter o código ao longo do tempo. O polimorfismo é alcançado por meio de funções virtuais e classes base, e é uma parte importante da herança em C++. Vou explicar os principais aspectos do polimorfismo em C++:
Funções Virtuais e Substituição:

Uma função virtual é uma função declarada na classe base com a intenção de ser substituída pelas classes derivadas. A substituição de funções virtuais é um conceito-chave no polimorfismo. Aqui está como você declara uma função virtual:

cpp

class Forma {
public:
    virtual void desenhar() {
        cout << "Desenhando uma forma." << endl;
    }
};

Uma vez que uma função é declarada como virtual na classe base, ela pode ser substituída por funções nas classes derivadas:

cpp

class Circulo : public Forma {
public:
    void desenhar() override {
        cout << "Desenhando um círculo." << endl;
    }
};

Aqui, a função desenhar() na classe Circulo substitui a função virtual da classe Forma.
Polimorfismo de Ponteiros e Referências:

O polimorfismo é geralmente usado com ponteiros ou referências para a classe base. Isso permite que você chame métodos da classe derivada por meio de um ponteiro ou referência da classe base:

cpp

Forma* ptr = new Circulo();
ptr->desenhar();  // Chama desenhar() da classe Circulo

O compilador determina dinamicamente o tipo real do objeto em tempo de execução e chama o método correto da classe derivada.
Funções Virtuais Pura e Classes Abstratas:

Uma função virtual pura é uma função virtual que não tem implementação na classe base. Classes que contêm funções virtuais puras são chamadas de classes abstratas e não podem ser instanciadas. Elas servem como interfaces que outras classes devem implementar. Uma classe abstrata é definida da seguinte maneira:

cpp

class Forma {
public:
    virtual void desenhar() = 0; // Função virtual pura
};

Qualquer classe que herda de uma classe abstrata deve implementar todas as funções virtuais puras para ser considerada uma classe completa.
Vantagens do Polimorfismo:

    Código Genérico: O polimorfismo permite escrever código que lida com classes diferentes de maneira uniforme, promovendo a reutilização de código.

    Extensibilidade: Você pode adicionar novas classes derivadas sem alterar o código existente que trabalha com a classe base.

    Substituição: As funções virtuais permitem que métodos em classes derivadas substituam comportamentos específicos da classe base.

    Polimorfismo Dinâmico: A resolução de qual função será chamada ocorre em tempo de execução com base no tipo real do objeto.

Exemplo Completo:

cpp

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void fazerSom() {
        cout << "Um animal faz um som." << endl;
    }
};

class Cachorro : public Animal {
public:
    void fazerSom() override {
        cout << "O cachorro late." << endl;
    }
};

class Gato : public Animal {
public:
    void fazerSom() override {
        cout << "O gato mia." << endl;
    }
};

int main() {
    Animal* animais[2];
    animais[0] = new Cachorro();
    animais[1] = new Gato();

    for (int i = 0; i < 2; i++) {
        animais[i]->fazerSom();
    }

    delete animais[0];
    delete animais[1];

    return 0;
}

Neste exemplo, o polimorfismo permite que os métodos fazerSom() das classes Cachorro e Gato sejam chamados de maneira uniforme através do array de ponteiros Animal*. Isso demonstra como o polimorfismo permite tratar objetos de diferentes classes de forma genérica.

*/