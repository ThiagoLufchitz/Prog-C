#include <iostream>
#include <string>

using namespace std;
using std::string;

class ComboProduto;

class Produto{
    private:
        string NomeProduto;
        float preco;
    public:

        Produto(string NomeProduto,float preco): NomeProduto(NomeProduto),preco(preco){}

        string getNomeProduto(){return NomeProduto;}
        float getPreco(){return preco;}
        
        friend ComboProduto combinarProduto(Produto &a1,Produto &a2);
};

class ComboProduto{
    private:
        float totalValor;
        int quantidadeItens = 0;
    
    public:
        
        ComboProduto(){ totalValor = 0.0 ; quantidadeItens = 0;}

        float getTotalValor(){return totalValor;}
        int getQuantidadeItens(){return quantidadeItens;}

        friend ComboProduto combinarProduto(Produto &p1,Produto &p2);
};

ComboProduto combinarProduto(Produto &p1,Produto &p2){
    ComboProduto mix;
    float total,soma;

    soma = p1.getPreco() + p2.getPreco();
    total = soma - (0.15*soma);
    mix.totalValor = total;
    mix.quantidadeItens = 2;
    return mix;

};

int main(){
    Produto x1("Coca cola",8.5);
    Produto x2("Sprite",6.25);
    ComboProduto x3;
    x3 = combinarProduto(x1,x2);
    cout  << "Produtos : " << x1.getNomeProduto() << " " << x2.getNomeProduto() << endl;  
    cout << "Preco da "<< x1.getNomeProduto() << " : R$" << x1.getPreco() << endl; 
    cout << "Preco da "<< x2.getNomeProduto() << " : R$" << x2.getPreco() << endl;
    cout << "Valor Total com o desconto de 15% : R$" << x3.getTotalValor() << endl;
    cout << "Quantidade : " << x3.getQuantidadeItens() << endl;
}