#include <iostream>
#include <string>

using namespace std;
using std::string;

class FormaGeometrica{
    private:

    public:
        virtual void CalculaArea() = 0;
        virtual void oi(){cout << "oi, sou uma forma geometrica" << endl;};
};

class Retangulo : public FormaGeometrica{
    private:
        float base,altura;
    public:
        void CalculaArea() override{cout << base*altura << endl;}
        void oi() override{cout <<"oi, sou um retangulo"<<endl;}
};

int main(){
    FormaGeometrica *a;
    Retangulo b;

    a = &b;
    a->oi();
}