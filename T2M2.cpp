#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Funcionario{
    private:
        string nome;
        int id;
    protected:
        float renda = 1000;
    public:
        Funcionario(string nome,int id) : nome(nome),id(id){}

     string   getNome(){return nome;}
     int      getId(){return id;}
     virtual float    getRenda(){return renda;}
};

class NivelBasico : public Funcionario{
    private:
        string nivelb;
    public:
        NivelBasico(string nome,int id,string nivelb) : 
            Funcionario(nome,id),nivelb(nivelb){}

        string   getNivelB(){return nivelb;}
        float   getRenda() override {return 1.1*renda;}      
};

class NivelMedio : public NivelBasico{
    private:
        string nivelm;
    public:
        NivelMedio(string nome,int id,string nivelb,string nivelm) : 
            NivelBasico(nome,id,nivelb),nivelm(nivelm){}

        string   getNivelM(){return nivelm;}
        float   getRenda() override {return 1.5*renda;}      
};

class NivelSuperior : public NivelMedio{
    private:
        string nivels;
    public:
        NivelSuperior(string nome,int id,string nivelb,string nivelm,string nivels) :
            NivelMedio(nome,id,nivelb,nivelm),nivels(nivels){}

        string   getNivelS(){return nivels;}
        float   getRenda() override {return 2*renda;}      
};

int main(){
    NivelBasico   p1("jose",101,"coopema");
    NivelBasico   p2("maria",102,"Coopema");
    NivelBasico   p3("joao",103,"Monteiro Lobato");
    NivelBasico   p4("cleiton",104,"Xicao");
    NivelMedio    p5("Bruno",105,"Monteiro Lobato","Madre Marta");
    NivelMedio    p6("Cleber",106,"Coopema","Madre Marta");
    NivelMedio    p7("Fernanda",107,"Objetivo","Madre Marta");
    NivelMedio    p8("Amanda",108,"Monteiro Lobato","Madre Marta");
    NivelSuperior p9("Nemo",109,"Xicao","Madre Marta","UFMT");
    NivelSuperior p10("Lucas",110,"Cristino Cortes","Angulo","UFMG");
    float TotalRenda = 0.0,RendaB = 0,RendaM = 0,RendaS = 0;

    vector<Funcionario*>funcionarios ;
    funcionarios.push_back(&p1);
    funcionarios.push_back(&p2);
    funcionarios.push_back(&p3);
    funcionarios.push_back(&p4);
    funcionarios.push_back(&p5);
    funcionarios.push_back(&p6);
    funcionarios.push_back(&p7);
    funcionarios.push_back(&p8);
    funcionarios.push_back(&p9);
    funcionarios.push_back(&p10);

    for(auto f : funcionarios){
        if (f->getRenda() > 1000 && f->getRenda() < 1200){
            RendaB += f->getRenda();
        }else if (f->getRenda() > 1100 && f->getRenda() < 1600){
            RendaM += f->getRenda();
        }else if (f->getRenda() > 1900){
            RendaS += f->getRenda();
        }
        TotalRenda += f->getRenda();
        
    }
    cout <<"Custo com Funcionarios do Ensino Basico: R$" << RendaB <<endl;
    cout <<"Custo com Funcionarios do Ensino Medio: R$" << RendaM <<endl;
    cout <<"Custo com Funcionarios do Ensino Superior: R$" << RendaS <<endl;
    cout <<"Custo Total da Empresa: R$" << TotalRenda <<endl;

}