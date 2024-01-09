#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Cartao{
    protected:
        string destinatario;
    public:
        
        friend istream &operator>>(istream &is, Cartao &entrada);
        Cartao(){ cin >> destinatario;}
        virtual void mensagem() = 0;      
};

istream &operator>>(istream &is,Cartao &entrada){
    is >> entrada.destinatario;
    return is;
}

class CartaoNatal : public Cartao{
    private:
    public:
        CartaoNatal() : Cartao(){};
        void mensagem() override{
           cout << "Feliz Natal : " << destinatario << endl;
        }     
};

class CartaoAniversario : public Cartao{
    private:
    public:
        CartaoAniversario() : Cartao(){};
        void mensagem() override{
           cout << "Feliz Aniversario : " << destinatario << endl;
        }
};

int main(){
    string flag = "Z";
    cout << "entre com o Tipo de cartao : T = niver , V = natal e N = sair" << endl;
    while(flag != "N"){
      if (flag == "T"){
        CartaoAniversario  a;
        a.mensagem();
        cout << "entre com o Tipo de cartao : T = niver , V = natal e N = sair" << endl;
      }
      if (flag == "V"){
        CartaoNatal  b;
        b.mensagem();
        cout << "entre com o Tipo de cartao : T = niver , V = natal e N = sair" << endl;
      }
      cin >> flag;
    }
}