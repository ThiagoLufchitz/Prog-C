#include<iostream>
#include<string>

using namespace std;

class Empregado{
    public:
    string nome;
    int salario;

    float aumenta(float porcentagem){
        salario = salario + salario*(porcentagem/100);
        return salario;
    }

    void mostraDados(){
        cout << "Funcionario : "<< nome << "Salario e : " << salario << endl ;
    }
};

int main()
{
    Empregado a;

    a.nome = "Thiago";
    a.salario = 3000;
    a.mostraDados();
    a.aumenta(30);
    a.mostraDados();

    return 0;
}
