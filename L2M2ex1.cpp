#include <iostream>
#include <string>
#include <vector>

using namespace std;

class VeiculosAVenda{
private:
    string marca;
    string modelo;
    int ano;
protected:
    float precodeVenda;
public:
    VeiculosAVenda(string marca,string modelo, int ano,float precodeVenda ) : marca(marca),modelo(modelo),ano(ano),precodeVenda(precodeVenda){}
    string getMarca(){ return marca;}
    string getModelo(){ return modelo;}
    int getAno(){ return ano;}
    float getPrecoVenda(){ return precodeVenda;}
    /*void setMarca(string marca){this->marca = marca;}
    void setModelo(string modelo){this->modelo = modelo;}
    void setAno(int ano){this->ano = ano;}
    void setPrecodeVenda(float precodeVenda){this->precodeVenda = precodeVenda;}*/

    virtual void mostraDados(){
        cout << "Modelo: "<<modelo<<endl;
        cout << "Marca: "<< marca<<endl;
        cout << "Ano: "+to_string(ano)<<endl;
        cout << "Preco de venda: "+to_string(precodeVenda)<<endl;
    }
};

class AutomovelAVenda : public VeiculosAVenda{
private:
    float motor;
    int nporta;
    bool cambio;
public:
    AutomovelAVenda(string marca,string modelo, int ano,float precodeVenda,float motor ,bool cambio, int nporta ) : 
        VeiculosAVenda(marca,modelo,ano,precodeVenda),motor(motor),cambio(cambio),nporta(nporta){}
    float getMotor(){return motor;}
    bool getCambio(){return cambio;}
    int getNporta(){return nporta;}
    
    void mostraDados(){
        VeiculosAVenda::mostraDados();
        cout << "Motor : "+to_string(motor)<<endl;
        if(cambio == 0){
            cout << "Cambio : Automativo"<<endl;
        }else{
            cout << "Cambio : Manual"<<endl;    }
        cout << "N Porta: "+to_string(nporta)<<endl;
    }
};

class MotocicletaAVenda : public VeiculosAVenda{
private:
    float cilindrada;
public:
    MotocicletaAVenda(string marca,string modelo, int ano,float precodeVenda,float cilindrada) : 
        VeiculosAVenda(marca,modelo,ano,precodeVenda),cilindrada(cilindrada){}
    float getCilindrada(){return cilindrada;}

    void mostraDados(){
        VeiculosAVenda::mostraDados();
        cout << "Cilindradas :"+to_string(cilindrada)<<endl;
    }
};


int main(){
    VeiculosAVenda v1("Ford","Betonera",1980,450000);
    AutomovelAVenda v2("Mercedes","Classe C",2016,234900.50,1.5,1,4);
    MotocicletaAVenda v3("Harley-Davidson","Fat-boy",2020,65400.25,1690);
    
    vector<VeiculosAVenda> veiculos;
    veiculos.push_back(v1);
    veiculos.push_back(v2);
    veiculos.push_back(v3);
    float somatorio = 0.0;
    v1.mostraDados();
    v2.mostraDados();
    v3.mostraDados();
    for(int i=0; i < veiculos.size() ; i++){
        somatorio += veiculos[i].getPrecoVenda();
    }
    cout << "Total de Preco : "+to_string(somatorio)<<endl;
}