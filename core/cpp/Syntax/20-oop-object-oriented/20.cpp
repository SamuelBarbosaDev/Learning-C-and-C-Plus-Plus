#include <iostream>
#include <string>
using namespace std;

class Pessoa{
    private:
        int id;
        string name;
        int old_year;
    
    public:
        Pessoa(int _id, string _name, int _old_year);
        int get_id(void);
        string get_name(void);
        int get_old_year(void);
        ~Pessoa();
};

int main(void){
    Pessoa friend_1 = Pessoa(1, "Samuel", 20);

    // Qual é o seu ID?
    cout << "ID " << friend_1.get_id() << endl;

    // Qual é o seu nome?
    cout << "NAME " << friend_1.get_name() << endl;

    // Qual é a sua idade?
    cout << "OLD_YEAR " << friend_1.get_old_year() << endl;

    // Class destruida?
    friend_1.~Pessoa();

    return 0;
}

Pessoa::Pessoa(int _id, string _name, int _old_year){
    id = _id;
    name = _name;
    old_year = _old_year;
}

int Pessoa::get_id(void){
    return id;
}

string Pessoa::get_name(void){
    return name;
}

int Pessoa::get_old_year(void){
    return old_year;
}

Pessoa::~Pessoa(){
    cout 
    << "Class destruida."
    << endl;
}



