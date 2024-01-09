#include <iostream>
#include <string>

using namespace std;
using std::string;

class ComboProduto;

class Produto{
    private:
        float preco;
        string nome ;
    public:
        Produto() = default;
        Produto(float preco,string nome):preco(preco),nome(nome){}

        float getPreco(){return preco;}
        string getNome(){return nome;}
        void setPreco(float preco){this->preco =  preco;}
        void setNome(string nome){this->nome = nome;}
    
         friend ComboProduto combinarProdutos(Produto &a,Produto &b);

};

class ComboProduto{
    // Atributos da classe ComboProduto é publico pois so assim  consgio acessa-los na main obtendo a referencia. Na funçao amiga combinarProdutos acesso tanto public quanto private

    private:
        float totalValor;
        int quantidadeItens;
    public:
        ComboProduto(){
            totalValor = 0.0;
            quantidadeItens = 1;
        };               

        float getTotalValor(){return totalValor;}
        int getQuantidadeItens(){return quantidadeItens;}
        void settotalValor(float totalValor){this->totalValor =  totalValor;}
        void setquantidadeItens(int quantidadeItens){this->quantidadeItens = quantidadeItens;}

        friend ComboProduto combinarProdutos(Produto &p1,Produto &p2);
};

ComboProduto combinarProdutos(Produto &p1,Produto &p2){
    float valor,soma;
    ComboProduto combo;
    soma = p1.preco+p2.preco;
    valor = soma - (soma*0.15); 
    combo.totalValor = valor;
    combo.quantidadeItens = 2;
    return combo;
}

int main(){
   Produto c2(5.10,"Suquita");
   Produto c3(10.5,"Velho Barreiro");
   ComboProduto c1; 
   c1 = combinarProdutos(c2,c3);
   cout << "Produtos" << endl;
   cout << c2.getNome() << ": " << c2.getPreco() << endl;
   cout << c3.getNome() << ": " << c3.getPreco() << endl;
   cout << "Quantidade: " << c1.getQuantidadeItens() << endl;
   cout << "********************************" << endl;
   cout << c2.getPreco() << " + " << c3.getPreco() << " - 15% " << endl;
   cout << "Valor Total: " << c1.getTotalValor() << endl;

}