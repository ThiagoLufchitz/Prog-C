#include <iostream>
#include <string>

using namespace std;

class Conta{
    private:
        int numero;
        string nome;
        float saldo;
    public:
        Conta(int num,string name):numero(num),nome(name),saldo(0.0){};
        Conta(int num,string name,float s):numero(num),nome(name),saldo(s){};
        int getNumero(){return numero;}
        string getNome(){return nome;}
        float getSaldo(){return saldo;}
        void setNumero(int numero){this->numero = numero;}
        void setNome(string nome){this->nome = nome;}
        void setSaldo(float saldo){this->saldo = saldo;}
        float depositar(float valor){saldo+=valor; return saldo;}
        float sacar (float valor){
            if(saldo-valor > 0){
                saldo-=valor;
                return saldo;
            }else{
                cout << "Saldo insuficiente" << endl;
            }
        }
        void imprime(){
            cout << "Conta num: "+to_string(numero) << endl;
            cout << "Nome Cliente: "+nome << endl;
            cout << "Saldo: "+to_string(saldo) << endl;
        }



};