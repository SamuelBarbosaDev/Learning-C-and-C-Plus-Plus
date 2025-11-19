#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int int_number = 69;
    float float_number = 69.021;
    double double_number = 699696969696969969696969696996969696969.699696969696969;
    char char_letter = 'A';
    string string_name = "Samuel";
    cout
        << "O número é: "
        << int_number
        << endl
        << "O número é: "
        << float_number
        << endl
        << "O número é: "
        << double_number
        << endl
        << "A letra é: "
        << char_letter
        << endl
        << "O nome é: "
        << string_name
        << endl;
    return 0;
}

/*
No C/C++, o tamanho exato das variáveis pode variar de acordo com a arquitetura do sistema e o compilador utilizado. No entanto, geralmente, os tamanhos padrão das variáveis em sistemas de 32 bits e 64 bits são os seguintes:

Tipos Integrais:

    char: Geralmente 8 bits (1 byte).
    signed char: Geralmente 8 bits (1 byte).
    unsigned char: Geralmente 8 bits (1 byte).
    short int (short): Geralmente 16 bits (2 bytes).
    unsigned short int (unsigned short): Geralmente 16 bits (2 bytes).
    int: Geralmente 32 bits (4 bytes) em sistemas de 32 bits, 64 bits (8 bytes) em sistemas de 64 bits.
    unsigned int: Geralmente 32 bits (4 bytes) em sistemas de 32 bits, 64 bits (8 bytes) em sistemas de 64 bits.
    long int (long): Geralmente 32 bits (4 bytes) em sistemas de 32 bits, 64 bits (8 bytes) em sistemas de 64 bits.
    unsigned long int (unsigned long): Geralmente 32 bits (4 bytes) em sistemas de 32 bits, 64 bits (8 bytes) em sistemas de 64 bits.
    long long int (long long): Geralmente 64 bits (8 bytes).
    unsigned long long int (unsigned long long): Geralmente 64 bits (8 bytes).

Tipos de Ponto Flutuante:

    float: Geralmente 32 bits (4 bytes).
    double: Geralmente 64 bits (8 bytes).
    long double: Geralmente 80 bits (10 bytes) ou mais.

Tipos Modificados:

    signed: Pode ser utilizado com char, short, int, long, long long para indicar que o tipo é assinado (pode representar números positivos e negativos).
    unsigned: Pode ser utilizado com char, short, int, long, long long para indicar que o tipo é não assinado (apenas números positivos).

Observações:

    Lembre-se de que esses tamanhos são típicos, mas podem variar entre diferentes sistemas e compiladores.
    Para obter os tamanhos exatos dos tipos em seu ambiente, você pode usar a biblioteca <limits.h> no C ou <climits> no C++ para acessar macros que fornecem informações sobre os limites dos tipos.
    Além dos tipos básicos listados acima, C/C++ também suportam tipos definidos pelo usuário, como struct, enum e ponteiros, que podem ter tamanhos diferentes dependendo da definição.
    É importante lembrar que o tamanho dos tipos de dados pode afetar a portabilidade do seu código entre diferentes sistemas. Portanto, ao escrever código, é uma boa prática usar tipos com tamanhos bem definidos, como int32_t, uint64_t, etc., que são definidos na biblioteca <stdint.h> no C e <cstdint> no C++. Isso ajuda a garantir que seu código funcione consistentemente em várias plataformas.
*/