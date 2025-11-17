#include <iostream>
#include <string>
using namespace std;


struct client{
    int client_id;
    char name[30];
    int old_year;
    float salary;
};

int main(void){
    client my_client[10];
    my_client[0] = {1, "Samuel", 20, 4000.0};

    cout << "Faça seu registro de cliente: " << endl;
    cout << "====================================" << endl;
    cout << "Escolha um id de 2 até 10: ";
    cin >> my_client[1].client_id;
    cout << "====================================" << endl;
    cout << "Escolha um nome de no máximo 29 caracteres: ";
    cin.ignore(); // Limpa o buffer antes de usar getline
    cin.getline(my_client[1].name, 30);
    cout << "====================================" << endl;
    cout << "Coloque sua idade: ";
    cin >> my_client[1].old_year;
    cout << "====================================" << endl;
    cout << "Coloque o seu salário: ";
    cin >> my_client[1].salary;
    cout << "====================================" << endl;
    
    cout
    << endl
    << "Client ID: "
    << my_client[1].client_id
    << endl
    << "Name: "
    << my_client[1].name
    << endl
    << "Age: "
    << my_client[1].old_year
    << endl
    << "Salary: "
    << my_client[1].salary
    << endl;
    
    return 0;
}

/*
Uma struct (estrutura) é uma forma de criar um novo tipo de dado personalizado em C e C++. Ela permite agrupar diferentes tipos de variáveis sob um único nome, tornando mais fácil organizar e manipular dados relacionados. As structs são frequentemente usadas para representar objetos ou entidades em um programa. Aqui está uma explicação completa sobre como usar structs em C e C++:
Definição de uma struct:

A sintaxe básica para definir uma struct em C e C++ é a seguinte:

cpp

struct NomeDaStruct {
    tipo1 membro1;
    tipo2 membro2;
    // ...
};

Cada membro dentro da struct é uma variável que pode ter um tipo de dado diferente.
Exemplo de struct:

cpp

#include <iostream>
#include <string>

using namespace std;

// Definição da struct
struct Pessoa {
    string nome;
    int idade;
    char genero;
};

int main() {
    // Criando uma instância da struct
    Pessoa pessoa1;
    pessoa1.nome = "Alice";
    pessoa1.idade = 30;
    pessoa1.genero = 'F';

    // Acessando os membros da struct
    cout << "Nome: " << pessoa1.nome << endl;
    cout << "Idade: " << pessoa1.idade << endl;
    cout << "Gênero: " << pessoa1.genero << endl;

    return 0;
}

Acesso aos Membros da struct:

Os membros de uma struct podem ser acessados usando o operador ponto (.).
Inicialização de uma struct:

cpp

Pessoa pessoa2 = {"Bob", 25, 'M'};

struct Aninhada:

Uma struct pode conter outra struct como membro.

cpp

struct Endereco {
    string rua;
    string cidade;
    string estado;
};

struct Pessoa {
    string nome;
    int idade;
    Endereco endereco; // Membro é uma struct
};

typedef:

Você pode usar typedef para criar um alias para uma struct.

cpp

typedef struct {
    string marca;
    string modelo;
    int ano;
} Carro;

Uso de struct em Funções:

structs podem ser passadas para funções como argumentos.

cpp

void exibirPessoa(Pessoa p) {
    cout << "Nome: " << p.nome << endl;
    cout << "Idade: " << p.idade << endl;
}

int main() {
    Pessoa pessoa3 = {"Carlos", 40, 'M'};
    exibirPessoa(pessoa3);
    return 0;
}

As structs são uma ferramenta poderosa para organizar e representar dados de forma mais estruturada e legível em C e C++. Elas permitem criar tipos de dados personalizados que podem ser usados para representar objetos ou conceitos específicos em seu programa.
*/