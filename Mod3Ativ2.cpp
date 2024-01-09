#include <iostream>
#include <string>

using namespace std;
using std::string;

class  FormaGeometrica{
    public:

        virtual void calculaArea() = 0;

        virtual void oi(){
            cout << "oi, sou uma forma geometrica" <<endl;
        }
};

class  Retangulo: public FormaGeometrica{
    private:
        float base;
        float altura;
    public:

        void calculaArea()override{
            cout << base*altura << endl;
        } 
        
        void oi()override{
            cout << "oi, sou um retangulo" << endl;
        }

};

int main(){
    Retangulo r;
    FormaGeometrica *f;
    f = &r;
    f->oi();
}